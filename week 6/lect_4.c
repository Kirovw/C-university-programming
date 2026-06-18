#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int*nums_1=(int*)malloc(sizeof(int)*5);
    int*nums_2=(int*)calloc(5,sizeof(int));

    for(int i=0; i<5,i+=1){
        nums_1[i]=i;
    }
    for(int i=0; i<5,i+=1){
        printf("%d\n",nums[i]);
        printf("%d\n", *(nums_1+i));

    }

    int static_array[10];
    printf("%d\n", sizeof(nums_1));

    free(nums_1);
    printf("%p", nums_1);

    int* larger_nums=realloc(nums_1,sizeof(int)*10);
    printf("%p",nums_1);
    printf("%p",larger_nums);
    return 0;
}
