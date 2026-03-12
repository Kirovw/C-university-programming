/#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*void func(int *x)
{
    (*x)++;
    printf("%d\n",*x);
}*/
int main()
{

    /*ukazateli*/
    /*int x =5;
    int*p=&x;
    func(&x);
    printf("%d\n",&x);
    p++;
    printf("%d",p);

    char a='k';
    char *p=&a;
    a++;
    printf("%c",a)*/
    /*int arr2[5];
    int len=sizeof(arr2)/sizeof(int);
    printf("%d",len);
    for(int i=0;i<sizeof(arr2)/sizeof(int);i++)
    {
        printf("Element %d\n",i+1)
        scanf("%d",&arr2[i]);
        printf("%d",arr2[i]);
    }
    printf("%d\n",arr2[0]);*/
    //printf("%d", &arr);

    char name[]="Ivan";
    printf(name);/*-samo za stringove nqma specifikaciq*/
    char newName[]="Petkan";
    int check=strlen(newName);
    printf("%d\n",sizeof(newName));

    //strcpy(newName,name);
    //printf(newName);
    //printf("\n%d",check);


    return 0;
}

