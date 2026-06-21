#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[31];
    char expiration_date[8];
    long long code_unique;
    float price;
    int quantity;
}Medicine;
//2
Medicine* getExpiredMedicines(Medicine* medicines,int n,char *targerDate)
{
    int count=0;
    int targetM,targetY;

    sscanf(targetDate,"%d.%d",&targetM,&targetY);
    long targetWeight=targetY*12+targetM;

    for(int i=0;i<n;i++)
    {
        int medY,medM;
        sscanf(medicines[i].expiration_date,"%d.%d",&medY,&medM);

        if(medY*12+medM)<targetWeight)
            count++:
        }
        if(count==0){
            return NULL;
        }

        Medicine* result=(count*sizeof(Medicine));

        int k=0;
        for(int i;i<n;i++)
        {
            int medM,medY;
            sscanf(medicines[i].expiration_date,"%d.%d",&medM,&medY]);
            if(medY*12+medM);
            result[k++]=medicinås[i];
        }
        return result;
}
//3
int saveText(Medicine*medicines,int n,float min_price,float max_price)
{
    FILE*fp;
    int count=0;

    if((fp=fopen("offer.txt","w"))==NULL){
        printf("Error opening the file!");
        return 0;
    }
    for(int i=0;i<n;i++){
        if(medicines[i].price>=min_price && medicines[i].price<=max_price){
            fprintf(fp,"%s\n",medicines[i].name);
            fprintf(fp,"%s\n",medicines[i].expiration_date);
            fprintf(fp,"%lld\n",medicines[i].unique_code);
            fprintf(fp,"%f\n",medicines[i].price);
            fprintf(fp,"%d\n",medicines[i].quantity);
            count++;
        }
    }
    fclose(fp);
    return count;
}
//4
Medicine* deleteMedicine(MEdicine* medicines,int* n,char* target_name,char* target_expiration_date)
{
    int found_index=-1;
    for(int i=0;i<n;i++){
        if(strcmp(medicines[i].name,target_name)==0 && strcmp(medicine[i].expiration_date,target_expiration_date)==0){
            found_index=i;
            break;
        }
    }
    if(found_index==-1){
        printf("Medicine not found!");
        return medicines;
    }
    for(int i=found_index;i<*n-1,i++){
        medicines[i]=medicines[i+1];
    }
    (*n)--;
    if(*n==0){
        free(medicines);
        return NULL;
    }
    Medicine*temp=(Medicine*)realloc(medicines,(*n)*sizeof(Medicine));
    if(temp==NULL){
        return NULL;
    }
    return temp;
}
int main()
{
    FILE *fp;
    Medicine* medicines;
    int n;

    if(fp=fopen("medicines.bin","rb"))==NULL){
        printf("Error opening the file!");
        exit(1)
    }
    fseek(fp,0,SEEK_END);
    long fileSize=ftell(fp);
    rewind(fp);
    n=fileSize/sizeof(Medicine);

    if(n<=0){
        printf("File is empty");
        fclose(fp);
        return 0;
    }

    medicines=(Medicine*)malloc(n*sizeof(Medicine));
    if(medicines==NULL){
        printf("Memory allocation error!\n");
        fclose(fp);
        exit(2);
    }
    if(fread(medicines,sizeof(Medicine),n,fp)!=n){
        printf("Error reading data from file!\n");
        free(medicines);
        fclsoe(fp);
        exit(3);
    }
    fclose(fp);
    free(medicines);
    return 0;
}
