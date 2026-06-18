#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100
void displayString(char str[]);

int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int main()
{
    //ednomerni masivi-<tip><ident><[razmer]>
    //int b[10]-deklaraciq
    //double arr[5]={4.5,6.7,7.3} ne e greshka
    //indeksirane-arr[1]
    // for cikul za obhojdane
    //deklaraciq n ukazatel; int *p=arr
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    for(int j=0;j<=10;j++){
        printf("Elelement %d=%d\n",j,arr[j]);
    }

    double arr1[]={4.5,6.7,7.3};
    printf("Purvo chislo:%lf\n",arr1[0]);
    printf("Vtoro chislo:%lf\n",arr1[1]);
    printf("Treto chislo:%lf\n",arr1[2]);

    for (int i = 0; i < 3; i++) {
    printf("Chislo %d: %lf\n", i + 1, arr1[i]);

    int arr2[]={10,20,30,40,50,60};
    int *ptr=arr2;
    printf("size of arr2 %ld\n",sizeof(arr2));
    printf("size of ptr %ld\n",sizeof(ptr));
    //

    int n,sum=0,i;
    int ar[N];
    do
    {
    printf("n=\n");
    scanf("%d",&n);
    if(n>N||n<0)
        printf("Nevalidna stojnost!!!\n");
    }while(n>N||n<=0);
    for(i=0;i<n;i++){
        printf("ar[%d]=\n%d\n",i,arr[i]);
        sum+=arr[i];
    }
    printf("Sum:%d\n",sum);


    //1
    int arrr[7];
    int summ=0;
    for(int i = 0; i < 7; i++) {
        do  {
            printf("arrr[%d] = ", i);
            scanf("%d", &arrr[i]);
            if (arrr[i] <= -5000 || arrr[i] > 5000) {
                printf("Vuvedete chislo v intervala (-5000, 5000]\n");
            }
        }while (arrr[i] <= -5000 || arrr[i] > 5000);
        sum += arrr[i];
    }
    printf("Obshtata suma e: %d\n", sum);
    //2
    int arr3[7];
    for(int i = 0; i < 7; i++){
        do{
            printf("arr3[%d]=",i);
            scanf("%d",&arr3[i]);
            if(arr3[i]<=-5000 || arr3[i]>5000){
                printf("Greshka v intervala!\n");
            }
        }while(arr3[i]<=-5000 || arr3[i]>5000);
    }
    int max = arr3[0];
    int min = arr3[0];
    for (i = 1; i < 7; i++) {
        if (arr3[i] > max) {
            max = arr3[i];
        }
        if (arr3[i] < min) {
            min = arr3[i];
        }
    }
    printf("Naj-golyamoto: %d\n", max);
    printf("Naj-malkoto: %d\n", min);

    //3
    int arr4[7];
    int sum1=0;
    int size_of_array=sizeof(arr4);
    for(int i = 0; i < 7; i++){
        do{
            printf("arr3[%d]=",i);
            scanf("%d",&arr3[i]);
            if(arr4[i]<=-5000 || arr4[i]>5000){
                printf("Greshka v intervala!\n");
            }
        }while(arr4[i]<=-5000 || arr4[i]>5000);
    }
    sum1+=arr4[i];
    int average_arr=sum1/size_of_array;
    printf("%d",average_arr);
    printf("%d",size_of_array);
    //4
    int arr5[7];
    int sum2=0;
    int size_of_array1=sizeof(arr5);
    for(int i = 0; i < 7; i++){
        do{
            printf("arr3[%d]=",i);
            scanf("%d",&arr3[i]);
            if(arr4[i]<=-5000 || arr4[i]>5000){
                printf("Greshka v intervala!\n");
            }
        }while(arr5[i]<=-5000 || arr5[i]>5000);
    }
    sum2+=arr5[i];
    int average_arr1=sum1/size_of_array1;

    int closest_num=arr5[0];
    int closest_num_ind=0
    int min_diff=fabs(arr5[0] - average_arr1);

    for (int i = 1; i < n; i++) {
        int current_diff = fabs(arr5[i] - average);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            closest_num_ind=i;
        }
    }
    printf("%d",arr5[closest_num_ind]);
    printf("%d",closest_num_ind)

    //////Masivi ot charove
    char greeting[6]={'A','n','t','o','n','\0'};
    printf("%s",greeting);

    char name[30];
    printf("Enter name: ");
    fgets(name,sizeof(name),stdin);
    printf("Name: ");
    puts(name);

    char str[50];
    printf("Enter a name:");
    fgets(str,sizeof(str),stdin);
    displayString(str);
    puts(str);

    char name1[]="Anton Kirov";
    printf("%c",*name);
    printf("%c",*(name+1);
    printf("%c",*(name+7);

    char *namePtr;
    namePtr=name;
    printf("%c",*namePtr);
    printf("%c",*(namePtr+1);
    printf("%c",*(namePtr+7);

    //strlen(s1)-vrushta duljina na niza
    //strcmp(s1,s2)-sravnqva dva niza, vruhsta 0

    //1
    char text1[]="KSI";
    int len_text=my_strlen(text);
    printf("%d",len_text);

    //2
    char text[] = "Zdravei kak si?";
    int count = 0;
    int in_word = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            in_word = 0;//ne sme v duma
        }
        else {
                count++;
                in_word = 1;//v duma
            }
        }
    }
    printf("%d",count);
    //4
    char strr1[] = "Hello";
    char strr2[] = "Hello";
    int i = 0;
    int equal = 1;//ednakvi

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;//razlchni
            break;
        }
        i++;
    }
    if (equal) {
        printf("Ednakvi\n");
    } else {
        printf("Razlichni");
    }















}
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
