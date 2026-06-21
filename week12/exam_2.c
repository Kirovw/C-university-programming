#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[31];
    char expiration_date[11];
    long long unique_code;
    float price;
    int quantity;
}Medicine;

void applyDiscount(Medicine *medicines, int n, char *targetDate) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        int yearCompare = strcmp(&medicines[i].expiration_date[3], &targetDate[3]);

        if (yearCompare < 0) {
            yearCompare = -1;
        } else if (yearCompare == 0) {
            yearCompare = strncmp(medicines[i].expiration_date, targetDate, 2);
        } else {
            yearCompare = 1;
        }
        if (yearCompare < 0) {
            float oldPrice = medicines[i].price;
            medicines[i].price *= 0.80;

            printf("%s - %s - %.2f leva - %.2f leva\n",
                   medicines[i].name, medicines[i].expiration_date, oldPrice, medicines[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No medicines found matching the criteria.\n");
    }
}
void saveMedicinesToBinary(Medicine *medicines, int n, int minQuantity) {
    FILE *fp;
    if ((fp = fopen("offer.bin", "wb")) == NULL) {
        printf("Error opening offer.bin");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (medicines[i].quantity > minQuantity) {

            int nameLen = strlen(medicines[i].name);
            fwrite(&nameLen, sizeof(int), 1, fp);
            fwrite(medicines[i].name, sizeof(char), nameLen, fp);
            fwrite(medicines[i].expiration_date, sizeof(medicines[i].expiration_date), 1, fp);
            fwrite(&medicines[i].unique_code, sizeof(long long), 1, fp);
            fwrite(&medicines[i].price, sizeof(float), 1, fp);
            fwrite(&medicines[i].quantity, sizeof(int), 1, fp);
        }
    }
    fclose(fp);
}
Medicine* deleteMedicine(Medicine *medicines,*int n,long long *targeted_code)
{
    int found_index=-1;
    for(int i=0; i<*n; i++){
        if(medicines[i].unique_code==*targeted_code){
            found_index=i;
            break;
        }
    }
    if(found_index==-1){
        printf("Medicine not found!\n");
        return medicines;
    }
    for(int i=found_index;i<*n-1;i++){
        medicines[i]=medicines[i+1];
    }
    (*n)--;
    if(*n==0){
        free(medicines);
        return NULL;
    }

    Medicine *temp=(Medicine*)realloc(medicines,(*n)*sizeof(Medicine));

    if(temp==NULL){
        return NULL;
    }
    return temp;
}
int main()

{
    FILE *fp;
    Medicine *medicines;
    int n=0;
    char line[200];

    if ((fp = fopen("medicines.txt", "r")) == NULL) {
        printf("Error opening the file\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fp)) {
        n++;
    }
    rewind(fp);

    medicines = (Medicine*)malloc(n * sizeof(Medicine));
    if (medicines == NULL) {
        fclose(fp);
        exit(3);
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(fp, "%s; %s; %lld; %f; %d\n",
            medicines[i].name,
            medicines[i].expiration_date,
            &medicines[i].unique_code,
            &medicines[i].price,
            &medicines[i].quantity) != 5)
        {
            printf("Error reading line %d\n", i + 1);
        }
    }
    fclose(fp);
    free(medicines);

    return 0;
}
