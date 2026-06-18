#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    char text[15];
    FILE* fp=fopen("example.txt","w");
    if(fp==NULL){
        exit(1);
    }
    fprintf(fp,"something else");
    fclose(fp);
    fp=fopen("example.txt","r");
    fgets(text,15,fp);
    fclose(fp);
    printf("%s",text);
    */
    char name[]="Ivan";
    char name_from_file[10];
    int group=38;
    FILE* fp=fopen("example.bin","wb");
    if(fp==NULL){
        exit(1);
    }
    int len=sizeof(name);
    fwrite(&len,sizeof(int),1,fp);
    fwrite(name, sizeof(char),5,fp);
    fwrite(&group, sizeof(int),1,fp);
    fclose(fp);

    fp=fopen("example.bin","rb");
    if(fp==NULL){
        exit(1);//1 faia ne moje da byde otvoren
    }
    int len_from_file;
    int group_from_file;
    fread(&len_from_file,sizeof(int),1,fp);
    fread(name_from_file,sizeof(char),len_from_file,fp);
    fread(&group_from_file,sizeof(int),1,fp);

    printf("%s",name_from_file);
    printf("%d",group_from_file);
}
