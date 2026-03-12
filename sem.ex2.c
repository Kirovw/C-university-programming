#include <stdio.h>
#include <stdlib.h>
//1
int max(int a,int b)
{
    int result;
    if(a>b){
        return a;
    }
    return b; //ako a ne e po-golqmo b
}

int min(int a,int b)
{
    int result;
    if (a<b){
        return a;
    }
    return b; //ako a ne e po-malko b
}
//3
int equivalent(int m,int n, int p)
{
    if(m==n&&m==p){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
   //1
    int num;
    printf("Vavedete chislo:\n");
    scanf("%d",&num);

    if(num==0){
        return 0;
    }
    int max_num=num;
    int min_num=num;
    while(num!=0){
        max_num=max(max_num,num);
        min_num=min(min_num,num);

        printf("Vavedete sledvashto chislo (0 za krai):\n");
        scanf("%d",&num);
    }
    printf("Max: %d, Min:%d\n",max_num,min_num);

    //3
    int m,n,p;
    printf("Vavedete parvo chislo za proverka m:\n");
    scanf("%d",&m);
    printf("Vavedete vtoro chislo za proverka n:\n");
    scanf("%d",&n);
    printf("Vavedete treto chislo za proverka p:\n");
    scanf("%d",&p);

    if(equivalent(m,n,p)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }


    //2
    int hours, minutes;
    printf("Chas: ");
    scanf("%d", &hours);
    printf("Minuti: ");
    scanf("%d", &minutes);

    minutes = minutes + 15;

    if(minutes >= 60) {
        hours = hours + 1;//minutite preminavat v drugiq chas
        minutes = minutes - 60;// i zavishenite minuti v razlikata v drugi chas
    }

    if(hours >= 24) {
        hours = 0;
    }
    printf("%d:%02d\n", hours, minutes);


    //4
    int whole_num;
    int bonus_points;
    printf("Vavedete broj tochki: \n");
    scanf("%d",&whole_num);

    if(whole_num<=100){
        bonus_points=5;
    }
    if(whole_num>1000){
        bonus_points=0.01*whole_num;
    }
    else if(whole_num>100){
        bonus_points=0.25*whole_num;
    }
    if(whole_num%2==0){
        bonus_points=bonus_points+1;
    }
    if(whole_num%10==5){
        bonus_points=bonus_points+2;
    }
    printf("%d\n",bonus_points);
    printf("%d\n",whole_num+bonus_points);


    //int x=5;
    //int *px=&x;
    //printf("%p",&x);
    //printf("%p",px);
    //printf("%d",*px);
    //printf("%d",x);

    //5
    int time1, time2, time3;
    int total_seconds, minutess, seconds;
    printf("Enter time 1 (1-50): ");
    scanf("%d", &time1);
    printf("Enter time 2 (1-50): ");
    scanf("%d", &time2);
    printf("Enter time 3 (1-50): ");
    scanf("%d", &time3);

    total_seconds = time1 + time2 + time3;

    minutess = total_seconds / 60;
    seconds = total_seconds % 60;//izlishnite sekundi koito ne pravqt cqla minuta

    printf("%d:%02d\n", minutess, seconds);

    //6
    double x1, y1, x2, y2, x, y;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }
    //12
    char c;
    printf("Vavedete simvol: \n");
    scanf("%c",&c);
    //12.1
    printf("    %c\n", c);
    printf("   %c %c\n", c, c);
    printf("  %c   %c\n", c, c);
    printf(" %c     %c\n", c, c);
    printf("%c %c %c %c %c\n", c, c, c, c, c);
    //12.2
    printf("%c %c %c %c %c\n", c, c, c, c, c);
    printf(" %c     %c\n", c, c);
    printf("  %c   %c\n", c, c);
    printf("   %c %c\n", c, c);
    printf("    %c\n", c);
    return 0;
}
