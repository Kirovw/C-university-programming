#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int is_prime(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    //1
    int r,c;
    printf("Vuvedete broi redove i koloni: ");
    scanf("%d %d",&r,&c);

    int arr[r][c];
    printf("Vuvedete elementite\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int rowsOK=1;
    int colsOK=1;

    for(int i=0;i<n;i++)
        for(int j=0;j<c;j++)
            if(arr[i][j]<arr[i][j-1])
                rowsOK=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<c;j++)
            if(arr[i][j]<arr[i-1][j])
                colsOK=0;
    if(rowsOK&&colsOK)
        printf("YES\n");
    else
        printf("NO\n");

    //3
    int rows,col;
    printf("Vuvedete broi redove i koloni: ");
    scanf("%d %d",&rows,&col);

    int arr1[rows][col];

    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&arr1[i][j]);

    int min=arr1[0][0];
    int max=arr1[0][0];
    int max_row=0;
    int min_row=0;

    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            if(arr1[i][j]< min){
                min=arr1[i][j];
                min_row=i;
            }
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            if(arr1[i][j]> max){
                max=arr1[i][j];
                max_row=i;
            }
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++){
            int temp=arr1[min_row][j];
            arr1[min_row][j]=arr1[max_row][j];
            arr_1[max_row][j]=temp;
        }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
            printf("%d",arr1[i][j]);
        printf("\n")
    }
    //7
    int ro,co;
    printf("Vuvedete broi redove i koloni: ");
    scanf("%d %d",&ro,&co);

    if(ro<3||co<3){
        return 0;
    }

    int matrix [ro][co];
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&matrix[i][j]);

    int min_sum=0;
    int best_ro=0;
    int best_co=0;
    for(int i=0;i<ro-3;i++){
        for(int j=0;j<co-3;j++){
            int current_sum=0;

        }
    }
    //6
    int el;
    int n1,n2;
    int *arr1;
    int *arr2;


    printf("Vuvedete broj elementi (el):");
    scanf("%d",&el);
    n1=el;

    arr1=(int*)malloc(n1*sizeof(int));
    arr2=NULL;

    printf("Vuvedete elementite:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n1;i++){
        if(is_prime(arr1[i])){
            n2++;
            arr2=(int*)realloc(arr2,n2*sizeof(int));
            arr2[n2]=arr1[i];
        }
        for(int j=0;j<n1;j++){
            arr1[j]=arr1[j+1];
        }
        n1--;
        arr1=int*


    }













    return 0;
}
