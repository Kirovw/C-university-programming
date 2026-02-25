#include <stdio.h>
#include <stdlib.h>

void rectangleArea(int a,int b)
{
    float S;
    S=a*b;
    printf("\nArea trapezoid: %2.f\n",S);
}
void circle(int d)
{
    float P;
    P=3.14*d;
    printf("\nArea Circle: %2.f\n",P);
}

int main()
{
    int x=5;
    printf("Hello world %d!\n",x);

    int a,b;
    printf("\nEnter a: \n");
    scanf("%d",&a);
    printf("\nEnter b: \n");
    scanf("%d",&b);
    rectangleArea(a,b);

    int d;
    printf("\nEnter d: \n");
    scanf("%d",&d);
    circle(d);

    float z,v,c,p,y=0;
    printf("z=");
    scanf("%f",&z);
    printf("v=");
    scanf("%f",&v);
    printf("c=");
    scanf("%f",&c);
    printf("p=");
    scanf("%f",&p);
    y=(z*p*15*v-c);
    printf("y= %2.f",y);


    float j=12,k=5,l=0;
    l=j/k;
    printf("y=%2.f\n",l);
    printf("Incr= %2.f\n",j++);
    printf("Decr= %2.f\n",k--);
    printf("j=%d,k=%d\n",j,k);
    printf("%d\n",j&&k);
    printf("%d\n",j||k);
    printf("%d\n",!j);

    float q,w;
    printf("Enter q: \n");
    scanf("%f",&q);
    printf("Enter w: \n");
    scanf("%f",&w);
    printf("SB: %3.f\n", q+w);
    printf("Raz: %3.f\n", q-w);
    printf("Umn: %3.f\n", q*w);
    printf("Del: %3.f\n",q/w);
    printf("SBRR: %3.f",(++q)+(--w));


    return 0;
}

