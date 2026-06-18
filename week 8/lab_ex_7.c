#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int n;
    printf("Vuvedete broi na elementi (n)\n:");
    scanf("%d",&n);

    int arr[n];
    printf("Vuvedete elementite\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count_even_nums_on_odd_ind=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && i%2!=0)
            count_even_nums_on_odd_ind+=1;
    }
    printf("Chetnite chisla na nechten indeks sa: %d\n",count_even_nums_on_odd_ind);

    //2
    int len;
    printf("Vuvedete broi na elementi (len)\n:");
    scanf("%d",&len);

    int arr1[len];
    int sums[len];

    printf("Vuvedete elementite(chetiricifreni chisla)\n");
    for(int i=0;i<len;i++){
        scanf("%d",&arr1[i]);
        if(1000>arr1[i] || arr1[i]>9999){
            printf("Greshka: Chisloto ne e chetiricifreno!\n");
            return 0;
        }
        int temp=arr1[i];
        int current_sum=0;
        while(temp>0){
            current_sum+=temp%10;
            temp/=10;
        }
        sums[i]=current_sum;
    }
    for(int i=0;i<len;i++){
        printf("%d",sums[i]);
    }
    printf("\n");
    //3
    int len1;
    printf("Vuvedete broi na elementite(len1)\n:");
    scanf("%d",&len1);

    int arr2[len1];
    printf("Vuvedete elementite:\n");
    for(int i=0;i<len1;i++){
        scanf("%d",&arr2[i]);
    }
    int not_zeros=0;
    for(int i=0;i<len1;i++){
        if(arr2[i]!=0){
            arr2[not_zeros]=arr2[i];
            not_zeros++;
        }
    }
    len1=not_zeros;
    for(int i=0;i<len1;i++){
        printf("%d",arr2[i]);
    }
    printf("\n");
    //4
    int r,c;
    printf("Vuvedete redove i koloni: %d,%d");
    scanf("%d %d",&r,&c);

    int double_arr[r][c];
    printf("Vuvedete elementite za dvumeren masiv: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",double_arr[i][j]);
        }
    }
    int one_arr_neg[r*c];
    int ind_one_arr=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(double_arr[i][j]<0){
                one_arr_neg[ind_one_arr]=double_arr[i][j];
                ind_one_arr++;
            }
        }
    }
    for(int i=0;i<ind_one_arr;i++){
        printf("%d",one_arr_neg[i]);
    }
    //5
    int rows,col;
    printf("Vuvedete redove i koloni: %d,%d");
    scanf("%d %d",&rows,&col);

    int double_arr1[rows][col];
    printf("Vuvedete elementite za dvumeren masiv: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&double_arr1[i][j]);
        }
    }
    int sum_ind=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum_ind+=i+j;

    int sum_double_arr=0;
    int count_len=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(sum_ind!=0 && double_arr1[i][j]%sum_ind==0){
               sum_double_arr+=double_arr[i][j];
               count_len+=1;
            }
        }
    printf("Average:%d",sum_double_arr/count);


    return 0;
}
