#include <stdio.h>
#include <stdlib.h>
double d[10]={10.23,19.87,1002.23,12.9,0.897,11.45,75.34,0.0,1.01,875.875};
int main()
{
    char str[80]="This is a file system test!";
    FILE *fp;
    char *p;
    int i;

    if((fp=fopen("myfile.txt","w"))==NULL)
    {
        printf("Cannot open file. \n");
        exit(1);
    }
    p=str;
    while(*p)
    {
        if(fputc(*p,fp)==EOF)
        {
            printf("Error writing file. \n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if((fp=fopen("myfile.txt","r"))==NULL)
    {
        printf("Cannot open file \n");
        exit(1);
    }
    for(;;)
    {
        i=getc(fp);
        if(i==EOF) break;
        putchar(i);
    }

    fclose(fp);
    //feof()proverqvame dali sme stignali do kraq na fajla

    //2
    long loc;
    double value;
    FILE *fp;

    if((fp=fopen("myfile","wb"))==NULL)
    {
        printf("Cannot open file. \n");
        exit(1);
    }
    if(fwrite(d,sizeof d,1,fp)!=1)
    {
      printf("Write error. \n");
    }
    fclose(fp);

    if((fp=fopen("myfile","rb"))==NULL)
    {
        printf("Cannot open file. \n");
        exit(1);
    }
    printf("Which element ?");
    scanf("%ld",&loc);
    if(fseek(fp,loc*sizeof(double),SEEK_SET))
    {
        printf("Seek error. \n");
        exit(1);
    }
    fread(&value,sizoef(double),1,fp);
    printf("Element %ld is %f",loc,value);

    fclose(fp);
    //SEEK_SET
    //ftell tekushta poziciq


    //3
    FILE *fp,*fp1;
    int i,a,b;
    i=1500;
    if((fp=fopen("binary","wb"))==NULL)
    {
        printf("the binary file couldnt open\n");
        exit(1);
    }
    if((fp1=fopen("txt","w"))==NULL)
    {
        printf("the txt file couldnt open\n");
        exit(2);
    }
    fprintf(fp1,"%d",i);
    if(fwrite(&i,sizeof(int),1,fp)!=1)
    {
        printf("write error occured\n");
        exit(3);
    }
    fclose(fp);
    fclose(fp1);

    if(fp=fopen("binary","rb"))==NULL)
    {
        printf("the binary file couldnt open");
        exit(4);
    }
    if(fp1=fopen("txt","r"))==NULL)
    {
        printf("the txt file couldnt open\n");
        exit(5);
    }
    if(fread(&a,sizeof(int),1,fp)!=1)
    {
        printf("write error occured\n");
        exit(6);
    }
    fscanf(fp1,"%d",&b);

    printf("a is %d and b is %d\n",a,b);
    fclose(fp);
    fclose(fp1);
    system("pause");

    return 0;



}
