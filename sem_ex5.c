#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    float price;
    int capacity;
    int count;
}Item;

int main()
{
    int guests;
    printf("Vuvedete broi gosti:\n");
    scanf("%d",&guests);

    Item items[4]={
        {"Chair",13.99,1,0}
        {"Table", 42.00, 8, 0}
        {"Cups", 5.98, 6, 0}
        {"Dishes", 21.02, 6, 0}
    };
    char input[20];
    float total_spent;

    printf("Kakvo ste kupili do momenta: \n");
    scanf("%s",input);

    while(strcmp(input,"PARTY!")!=0){
        if(strcmp(input,items[i].name)==0){
            items[i].count++;
            total_spent+=items[i].price;
        }
    }
    printf("%f\n", totalSpent);

    for (int i = 0; i < 4; i++){
        int total_needed=(guests+items[i].capacity-1)/(items[i].capacity);
        if(total_needed>items[i].count){
            int missing=total_needed-items[i].count;
        }
    }



    return 0;
}
