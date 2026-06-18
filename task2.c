#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char name[50];
    float price;
    int id;
    int is_delivered;
}Product;
typedef struct{
    char address[100];
    int product_id;
    int is_completed;
}Order;
int main()
{
    Product products[100];
    Order orders[100];
    int p_count=0;
    int o_count=0;

    char command[20];//end,order,product
    printf("Vuvedete comanda(-end,order,product):");
    scanf("%s",command);

    while(strcmp(command,"end")!=0){
        if(strcmp(command,"product")==0){
            Product p;
            printf("Ime ot sklada na produkt: \n");
            printf("Cena na produkt:\n");
            printf("Unikalne nomer na produkt:\n");
            scanf("%s" "%f" "%d",p.name,&p.price,&p.id);

            int found_order=-1;
            for(int i=0;i<o_count;i++){
                if(orders[i].product_id==p.id && orders[i].is_completed==0){
                    found_order=i;
                    break;
                }
            }
            if(found_order !=-1){
                printf("Client %s ordered %s\n",orders[found_order].adress,p.name);
                orders[found_order].is_completed=1;
            }
        else if(strcmp(command,"order")==0){
            Order o;
            scanf("%s %d",o.address,&o.product_id);
            o.is_completed=0;

            int found_order= -1;
            for(int i=0;i<p_count;i++){
                if(products[i].id==o.product_id){
                    found_product=i;
                    break;
                }
            }
            if(found_product!= -1){
                printf("Client %s ordered %s\n",o.address,products[found_product].name);
                products[found_product].is_delivered=1;
            }
        }
        scanf("%s",command);
    }
    return 0;
}
