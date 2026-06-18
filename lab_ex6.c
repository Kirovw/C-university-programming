#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5
char *M[SIZE]={"1-vuvejdane,2-izvejane,3-suma,4-max,5-izhod"}
int*input(int *br,int *mas);

int main()
{
    //dinamichna pamet
    int i,n;
    int *stations;
    i=7;
    stations=(int*) malloc(i*4);
    if(stations=NULL)
        exit(1);
    for(int n=0;n<i;n++)
        stations[n]=n;
    for(int n=0;n<7;n++)
        printf("%d",stations[n]);
    printf("\n");

    int*ptrToStations;
    ptrToStations=stations;

    stations=(int*) malloc(++i*4);
    for(n=0;n<7;n++)
        stations[n]=ptrToStations[n];
    stations[i-1]=i;

    for(n=0;n<7;n++)
        printf("%d",stations[n]);
    printf("\n");

    ptrToStations=stations;
    int x=3;
    for(int n=x;n<7;n++)
        ptrToStations[n-1]=ptrToStations[n];
        stations=(int*)malloc(--i*4);
    for(n=0;n<7;n++)
        stations[n]=ptrToStations[n];
    for(n=0;n<7;n++)
        printf("%d",stations[n]);

    free(stations);
    free(ptrToStations);

    //realloc(ukazatel kum masiva chiiito razmeri shte promqname,nov razmer)
    int i;
    double *p;

    p=calloc(10,sizeof(double));

    for(i=0;i<10;i++)
        *(p+i)=i;

    for(i=0;i<10;i++)
        printf("*(p+%d)=%lf\n",i,*(p+i));

    free(p);

    double *pArr;
    pArr=calloc(4,sizeof(double));

    for(i=0;i<10;i++)
        *(pArr+i)=i*i;
    for(i=0;i<10;i++)
        printf("*(pArr+%d)=%lf\n",i,*(pArr+i));

    free(pArr);

    //zadelqne na pamet za dvumerni masivi
    int r=3,c=4;
    int *ptr=malloc((r*c)*sizeof(int));

    for(int i=0;i<r*c;i++)
        ptr[i]=i+1;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d",ptr[i*c+j]);
        printf("\n")

    free(ptr);
    }

    ///////////////////////
    int cod,n=0,*p=NULL,flag=0;

    do
    {
        for(int i=0;i<SIZE;i++)
            puts(M[i]);
        printf("izberete kod:");
        scanf("%d",&cod);
        switch(cod)
        {
            case1:p=intput(&n,p);
            flag=1;
            break;
            case2:
                if(flag==1)
                    out(n,p);
                else
                    printf("izberete parvo 1!\n");
            _getch();
            break
            case 3:if(flag==1)
            {
                out(n,p);
                printf("Sum=%d\n",sum(n,p));}
                _getch();
                break;
            case 4:if(flag==1)
            {
                out(n,p);
                printf("Max=%d\n",max(n,p));
            }
                else printf("Izberete parvo 1!\n");
                _getch();
                break;
            case 5:
                if(p!=NULL)
                {
                    free(p);
                    printf()
                }

        }
    }
    return 0;
}
int *input(int *br,int *mas)
{
    int k=0;
    printf("Vavedete razmer:\n");
    scanf("%d",&k);
    mas=(int*)malloc(k*sizeof(int));
    if(mas==NULL){
        printf("Niama pamet!");
        exit(1);}
    for(int i=0;i<k;i++)
    {
        printf("[%d]=",i);
        scanf("%d",*(mas+i))
    }
    return mas
}
void out(int br,int *mas)
{
    int i;
    for(i=0;i<br;i++)
    {
        printf("[%d]=%d\n",i,*(mas+i));
    }
}
int sum(int br,int *mas)
{
    int sum=0;
    for(int i=0;i<br;i++)
    {
        sum+=*(mas+i);
    }
    return sum;
}
int max(int br,int *mas)
{
    int max=mas[0];
    for(int i=0;i<br;i++){
        if(mas[0]<mas[i])
            max=mas[i];
    }
    return max;
}


