#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_anagram(char str1[],char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1!=len2){
        return 0;
    }
    char temp[10];
    strcpy(temp,str2);

    int found;
    for(int i=0;i<len1;i++)
        found=0;
        for(int j=0;j<len2;j++){
            if(str1[i]==temp[j]){
                found=1;
                temp[j]="\0";
                break;
            }
        }
        if(found==0){
            return 0;
        }
    return 1;
}


int main()
{
  if(is_anagram("silent","listen")){
    printf("anagram!");
  }
  else{
    printf("not an anagram!");
  }
  return 0;
}
