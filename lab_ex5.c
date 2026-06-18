#include <stdio.h>
#include <stdlib.h>
const int CITY=2;
const int WEEK=7;
int main()
{
    //ukazateli dinamichna pamet
    int var1;
    printf("addreess of var1 vriable: %x\n",&var1);

    int var=20;
    int *ip=&var;
    printf("%x\n",&var);//adress of var
    printf("%x\n",ip);//address of var
    printf("%d\n",*ip);//stojnostt zad ukazatelq

    int arr[]={10,20,30,40,50,60};
    int *ptr=arr;
    printf("arr[2]=%d\n",arr[2]);
    printf("*(arr+2)=%d\n",*(arr+2));
    printf("ptr[2]=%d\n",ptr[2]);
    printf("*(ptr+2)=%d\n",*(ptr+2));

    //int *ptr=NULL;
    //printf("%x",ptr);
    //1
    int varr2=20;
    int *pVarr2=&varr2;

    printf("adress:%p\n",&varr2);
    printf("adress:%p\n",pVarr2);
    printf("stojnost zad promenliva;%d\n",varr2);
    printf("stojnost zad promenliva;%d\n",*pVarr2);

    //2
    int a1=5;
    int b=6;
    int *pA1=&a1;
    int *pB=&b;

    printf("sum:%d\n",*pA1+*pB);
    printf("razlika:%d\n",*pA1-*pB);
    printf("umnojenie:%d\n",*pA1*(*pB));
    printf("delenie:%d\n",*pA1 / *pB);

    //dvumerni mnogomerni masivi
    //<tip>,<ident>,[][][];
    //int arr[4][3];-4reda,3koloni
    //int ar[3][4]={
        //{0,1,2,3},
        //{4,5,6,7},
        //{8,9,10,11}
    int ar[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("ar[%d][%d]=%d\n",i,j,ar[i][j]);
        }
    }

    int temperature[CITY][WEEK];
    for(int i =0;i<CITY;++i){
        for(int j =0;j<WEEK;++j){
            printf("City:%d, Day %d:",i+1,j+1);
            scanf("%d",&temperature[i][j]);
        }
    }
    for(int i =0;i<CITY;++i){
        for(int j =0;j<WEEK;++j){
            printf("temperature[%d][%d]=%d\n",i,j,temperature[i][j]);
        }
    }

    //1
    int n;
    printf("Vuvedete razmer n: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Vuvedete elementite:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //(i == j)
    printf("\nGlaven diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    printf("\nVtorostepenen diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][]);
    }

    //(j > i)
    printf("\nNad glavniya diagonal: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i)
                printf("%d ", a[i][j]);
        }
    }

    //(i > j)
    printf("\nPod glavniya diagonal: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    //2
    int N;
    printf("Razmer: ");
    scanf("%d", &N);
    int arr1[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int target = 0,
    d1 = 0,
    d2 = 0;
    for(int i=0; i<n; i++) {
        target += a[0][i];
        d1 += a[i][i];
        d2 += a[i][];
    }
    if (d1 != target || d2 != target) {
        printf("NE E magicheski\n");
        return 0;
    }




    return 0;
}
