#include <stdio.h>
#include <stdlib.h>


void figure()
{
    printf("----------\n");
    printf("-        -\n");
    printf("-        -\n");
    printf("-        -\n");
    printf("----------\n");
}
void convertInches(float inches)
{
    float mm, cm, dm, m;

    mm = inches * 25.4;
    cm = mm / 10;
    dm = mm / 100;
    m  = mm / 1000;

    printf("\nConverted values:\n");
    printf("Millimeters: %f mm\n", mm);
    printf("Centimeters: %f cm\n", cm);
    printf("Decimeters: %f dm\n", dm);
    printf("Meters: %f m\n", m);
}
void convertFar(float cels)
{
    float Far;
    Far=(cels*1.8)+32;
    printf("\nConverted values:\n");
    printf("Far: %f f\n",Far);
}
void convertRad(float deg)
{
    float rad;
    rad=deg*3.14/180;
    printf("\nConverted values:\n");
    printf("Rads: %f rad\n",rad);
}
void convertLev(float lev)
{
    float dollars,euros,pounds;
    dollars=lev/1.80;
    euros=lev/1.95583;
    pounds=lev/2.30;
    printf("\nConverted values:\n");
    printf("Dollars: %f d\n",dollars);
    printf("Euros: %f e\n",euros);
    printf("Pounds; %f p\n",pounds);
}
void trapezoidArea(float a,float b,float h)
{
    float S;
    S=(a+b)/2*h;
    printf("\nArea trapezoid: %f\n",S);
}
void rectangleArea(float x1,float y1,float x2,float y2)
{
    float width=abs(x2-x1);
    float height=abs(y2-y1);
    float area=width*height;
    printf("\nRectArea:\n");
    printf("Width: %f\n",width);
    printf("Height: %f\n",height);
    printf("RectArea: %f\n",area);
}
void triangleArea(float z1,float v1,float z2,float v2,float z3, float v3)
{
    float term1=z1(v2-v3);
    float term2=z2(v3-v1);
    float term3=z3(v1-v2);
    float Area=0.5*(term1+term2+term3);
    printf("\nTriArea:\n");
    printf("term1: %f\n",term1);
    printf("term2: %f\n",term2);
    printf("term3: %f\n",term3);
    printf("Area: %f\n",Area);
}

int main()
{
    figure();

    float inches;
    printf("\nEnter inches: ");
    scanf("%f",&inches);
    convertInches(inches);

    float cels;
    printf("Enter cels:");
    scanf("%f",&cels);
    convertFar(cels);

    float deg;
    printf("\nEnter degrees: ");
    scanf("%f",&deg);
    convertRad(deg);

    float lev;
    printf("\nEnter leva: ");
    scanf("%f",&lev);
    convertLev(lev);

    float a,b,h;
    printf("\nEnter a: ");
    scanf("%f",&a);
    printf("\nEnter b: ");
    scanf("%f",&b);
    printf("\nEnter h: ");
    scanf("%f",&h);
    trapezoidArea(a,b,h);

    float x1,y1,x2,y2;
    printf("\nEnter x1: ");
    scanf("%f",&x1);
    printf("\nEnter y1: ");
    scanf("%f",&y1);
    printf("\nEnter x2: ");
    scanf("%f",&x2);
    printf("\nEnter y2: ");
    scanf("%f",&y2);
    rectangleArea(x1,y1,x2,y2);

    float z1,v1,z2,v2,z3,v3;
    printf("\nEnter X1: ");
    scanf("%f",&z1);
    printf("\nEnter Y1: ");
    scanf("%f",&v1);
    printf("\nEnter X2: ");
    scanf("%f",&z2);
    printf("\nEnter Y2: ");
    scanf("%f",&v2);
    printf("\nEnter X3: ");
    scanf("%f",&z3);
    printf("\nEnter Y3: ");
    scanf("%f",&v3);
    triangleArea(z1,v1,z2,v2,z3,v3);
    return 0;
}
