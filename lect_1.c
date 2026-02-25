#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 67;
    printf("There was once a man named %s\n",characterName);
    printf("he was %d years old\n",characterAge);

    characterAge=30;
    printf("He really liked the name %s\n",characterName);
    printf("but did not like being %d\n",characterAge);

    int age=30;
    double gpa=3.5;
    char grade[]="A";
    char phrase[]="Academy";

    printf("Hello World\n");
    printf("%d\n",500);
    printf("My fav %s is %d\n","number",50);
    int favNum=10;
    char letter='i';
    printf("My fav num is %d and %c and %s\n",favNum,letter,"number");

    printf("%f\n",5.0+4.5);
    printf("%f\n",5/4.0);
    int num=6;
    printf("%d\n",num);
    printf("%f\n",sqrt(64));
    printf("%f\n",pow(2,3));
    printf("%f\n",ceil(36.6));
    printf("%f\n",floor(36.6));



    return 0;
}

