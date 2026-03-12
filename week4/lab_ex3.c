#include <stdio.h>
#include <stdlib.h>
float sum(float a, float b);

float sum(float a, float b)//definirane na funkciq,prototip na funkciq
{
    float r;
    r=a+b;
    return r;
}
int max(int,int);
//1
int upp(int n)
{
    int res;
    res=n+5;
    return res
}
//1
float square(float z)
{
    float S1;
    S1=z*z;
    return S1;
}
float rect(float c,v)
{
    float S2;
    S2=c*v;
    return S2;

}
float right_angled tri(float q,w)
{
    float S3;
    S3=(q*v)/2;
    return S3;
}
float circle(float p)
{
    return S4;
    S4=3.14*p^2;
    return S4;
}
//2
int returnSecond(int num1, int num2) {
    return num2;
}
//3
int even_odd(int numm1)
{
    if(numm1%2==0){
        return 1
    }
    else {
        return 0
    }
}
//7
int suma(int nummm1, int nummm2, int nummm3)
{
    int result1;
    result1=nummm1+nummm2+nummm3;
    return result1;
}
int max(int nummm1,int nummm2,int nummm3)
{
    int result2;
    if (nummm1>nummm2 && nummm1>nummm3){
        result2=nummm1;
    }
    else if (nummm2>nummm1 && nummm2>nummm3){
        result2=nummm2;
    }
    else{
        result2=nummm3;
    }
    return result2;
}
int min(int nummm1,int nummm2,int nummm3)
{
    int result3;
    if (nummm1<nummm2 && nummm1<nummm3){
        result3=nummm1;
    }
    else if (nummm2<nummm1 && nummm2<nummm3){
        result3=nummm2;
    }
    else{
        result3=nummm3;
    }
    return result3;
}
int average(int nummm1,int nummm2,int nummm3)
{
    int result4;
    result4=(nummm1+nummm2+nummm3)/3;
    return result4;
}
//5
int factoriel(int num)
{
    int resultt=1;
    for(int i=1;i<=num;i++){
        resultt=resultt*i;
    }
    return resultt;

}

int main()
{
    //funkciq//
    //potrebitelski i vgradeni funkcii
    //<tip><ime>(parametri>
        //{
            //kod
        //}
            //return<izraz>
    float a,b;
    printf("Vuvedete a: \n");
    scanf("%f",&a);
    printf("Vuvedete b: \n");
    scanf("%f",&b);

    printf("%f",sum(a,b));

    //1
    int n;
    printf("Chislo za uvelichenie: \n");
    scanf("%d",&n);
    printf("Uvelichenie: %d",upp(n))
    //1
    float z,c,v,q,w,p;
    printf("z: \n")
    scanf("%f",&z)
    printf("c: \n")
    scanf("%f",&c)
    printf("v: \n")
    scanf("%f",&v)
    printf("q: \n")
    scanf("%f",&q)
    printf("w: \n")
    scanf("%f",&w)
    printf("p: \n")
    scanf("%f",&p)
    int type;
    printf("type: \n");
    scanf("%d",&type)
    switch(type){
    case 1:
        printf("Kvadrat!\n");
        printf("Lice kv: %f",square(z));
        break
    case 2:
        printf("Pravougulnik!\n");
        printf("Lice pravougulnik: %f",rect(c,v));
        break
    case 3:
        printf("Pravougulen tr!\n");
        printf("Lice pr tr: %f",right_angled tri(q,w));
        break
     case 4:
        printf("Okruzhnost!\n");
        printf("Lice okr: %f",circle(p));
        break
    default
    {
        printf("Incorrect \n")
        return 0
    }
    //2
    int num1, num2, temp;

    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Predi: a = %d, b = %d\n", a, b);

    temp = a;
    a = returnSecond(a, b);//stava b
    b = temp;//stava a
    printf("Sled: a = %d, b = %d\n", a, b);
    //3
    int numm1;
    printf("Vuvedete chislo za proverka: \n");
    scanf("%d",&numm1);
    if(even_odd(numm1)){
        printf("Chetno\n")
    }
    else{
        printf("Nechetno\n")
    }
    //7
    int nummm1,nummm2,nummm3;
    printf("Vuvedete purvo chislo: \n");
    scanf("%d",&nummm1);
    printf("Vuvedete vtoro chislo: \n");
    scanf("%d",&nummm2);
    printf("Vuvedete treto chislo: \n");
    scanf("%d",&nummm3);

    printf("Suma: %d", suma(nummm1,nummm2,nummm3));
    printf("Maks: %d", max(nummm1,nummm2,nummm3));
    printf("Min: %d",min(nummm1,nummm2,nummm3));
    printf("Sredno aritmetichno: %d", average(nummm1,nummm2,nummm3));

    //5
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Ne moje faktoriel na chislo po-malko ot nula!\n");
    } else {
        printf("Result: %d\n", factorial(num));
    }
    return 0;
}
/*float sum(float a, float b)//definirane na funkciq,prototip na funkciq
{
    float r;
    r=a+b;
    return r;*/
/*int max(int num 1,int num 2)
{
    int result;
    if(num1>num2)
        result=num1;
    else
        result=num2;
    return result;
}*/
