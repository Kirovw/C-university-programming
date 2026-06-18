#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int n;
    printf("Vuvedete broj elementi na masiva:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Vuvedete chisla za masiva:%d\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int current_pl_len=1;
    int current_pl_ind=0;

    int max_pl_len=1;
    int max_pl_ind=0;

    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1]){
            current_pl_len++;
        }
        else{
            current_pl_len=1;
            current_pl_ind=i;
        }
        if(current_pl_len>max_pl_len){
            max_pl_len=current_pl_len;
            max_pl_ind=current_pl_ind;
        }
    }
    printf("naj-dulgata ploshtadka zapochvashta ot indeks:%d\n",max_pl_ind);
    printf("duljina:%d\n",max_pl_len);
    printf("chisloto na ploshtadkata e:%d\n",arr[max_pl_ind]);

    //2
    int n1;
    printf("Vuvedete broj elementi na masiva 2:");
    scanf("%d",&n1);

    int arr1[n1];
    printf("Vuvedete chisla za masiva 2:%d\n",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    int is_true=1;
    for(int i = 0; i < n1; i++) {
        if (i % 2 == 0) {
            if (arr1[i] >= arr1[i+1]) {
                is_true = 0;
            }
        }
        else {
            if (arr1[i] <= arr1[i+1]) {
                is_true = 0;
            }
        }
    }
    if (is_true){
        printf("Relaciite sa izpulneni!\n");
    }
    else{
        printf("NE sa izpulneni.\n");
    }

    //3
    int n2;
    printf("Vuvedete broj elementi na masiva 3:");
    scanf("%d",&n2);

    int arr2[n2];
    printf("Vuvedete chisla za masiva 3:%d\n",n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < n2 / 2; i++) {
        int temp = arr2[i];
        arr2[i] = arr2[n2 - 1 - i];
        arr2[n2 - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    //5çàä. Äàäåíà å ðåäèöà ñ N öåëè ÷èñëà. Äà så íàìåðè Ê-òèÿ ïî ãîëåìèíà åëåìåíò â ðåäèöàòà.
    int n3,k;
    printf("Vuvedete broj elementi na masiva 4:");
    scanf("%d",&n3);

    int arr3[n3];
    printf("Vuvedete chisla za masiva 4:%d\n",n3);
    for(int i=0;i<n3;i++){
        scanf("%d",&arr3[i]);
    }
    printf("Vuvedete k(goleminata na elementa,kojto tursite:\n");
    scanf("%d",&k);

    if(k<1||k>n){
        printf("Greshno k");
        return 0;
    }
    for(int i=0;i<n3;i++){//sortirane ot na-golqmoto kum nai-malkoto
        for(int j=0;j<n3-1-i;j++){
            if (arr3[j] < arr3[j + 1]) {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
        }
    }
    printf("k%d-tiqt po goemina element e:%d\n",k,arr3[k-1]);

    //6
    int n4;
    printf("Vuvedete broj elementi na masiva 5:");
    scanf("%d",&n4);

    int arr4[n4];
    printf("Vuvedete chisla za masiva 5:%d\n",n4);
    for(int i=0;i<n4;i++){
        scanf("%d",&arr4[i]);
    }
    int curr_len_pl=1;
    int curr_start_ind=0;

    int maxx_len_pl=1;
    int maxx_start_ind=0;

    for(int i=0;i<n4;i++){
        if(arr4[i]>a[i-1]){
            curr_len_pl++;
        }
        else{
            curr_len_pl=1;
            curr_start_ind=i;
        }
    }
    if(curr_len_pl>maxx_len_pl){
        maxx_len_pl=curr_len_pl;
        maxx_start_ind=curr_start_ind;
    }
    for(int i=maxx_start_ind;i<maxx_len_pl;i++){
        printf("%d",arr4[i]);
    }
    //11
    int n5;
    printf("Vuvedete broj elementi na masiva 6:");
    scanf("%d",&n5);
    if(n<1 || n>100){
        printf("greshen broj elementi!\n");
        return 0;
    }

    int arr5[n5];
    printf("Vuvedete chisla za masiva 6:%d\n",n5);
    for(int i=0;i<n5;i++){
        scanf("%d",&arr4[i]);
    }
    int max_ind=0;
    int max_num=arr4[0];

    int min_ind=0;
    int min_num=arr4[0];

    for(int i=1;i<n;i++){
        if(arr5[i]>max_num){
            max_num=arr5[i];
            max_ind=i;
        }
    }
    for(int i=1;i<n;i++){
        if(arr5[i]<min_num){
            min_num=arr5[i];
            min_ind=i;
        }
    }
    printf("Nai-golqmoto chislo:%d",max_num);
    printf("Nai-golqmoto chislo(ind):%d",max_ind);
    printf("Nai-malkoto chislo:%d",min_num);
    printf("Nai-malkoto chislo(ind):%d",min_ind);














    return 0;
}
