#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1*/
    int num;
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî: \n");
    scanf("%d",&num);
    if(num<6)
    {
        printf("×čńëîňî ĺ ďî-ăîë˙ěî îň 6");
    }
    /*2*/
    if(num%8>4)
    {
        printf("Ońňŕňúęúň îň äĺëĺíčňî ń 8 ĺ ďî-ăîë˙ě îň 4");
    }
    /*3*/
    int a, b, c, min;

    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî 1: ");
    scanf("%d", &a);
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî 2: ");
    scanf("%d", &b);
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî 3: ");
    scanf("%d", &c);
    min = a;
    if (b < min){
        min = b;}
    if (c < min){
        min = c;}
    printf("Íŕé-ěŕëęîňî ÷čńëî ĺ: %d\n", min);

    /*4*/
    int digit;

    printf("Âúâĺäĺňĺ öčôđŕ (0-9): ");
    scanf("%d", &digit);

    switch(digit)
    {
        case 0:
            printf("íóëŕ\n");
            break;
        case 1:
            printf("ĺäíî\n");
            break;
        case 2:
            printf("äâĺ\n");
            break;
        case 3:
            printf("ňđč\n");
            break;
        case 4:
            printf("÷ĺňčđč\n");
            break;
        case 5:
            printf("ďĺň\n");
            break;
        case 6:
            printf("řĺńň\n");
            break;
        case 7:
            printf("ńĺäĺě\n");
            break;
        case 8:
            printf("îńĺě\n");
            break;
        case 9:
            printf("äĺâĺň\n");
            break;
        default:
            printf("Ăđĺřęŕ! Ňîâŕ íĺ ĺ öčôđŕ.\n");

    /*5*/
    int day;
    printf("Âúâĺäĺňĺ ÷čńëî îň 1 äî 7: ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Ďîíĺäĺëíčę\n");
            break;
        case 2:
            printf("Âňîđíčę\n");
            break;
        case 3:
            printf("Ńđ˙äŕ\n");
            break;
        case 4:
            printf("×ĺňâúđňúę\n");
            break;
        case 5:
            printf("Ďĺňúę\n");
            break;
        case 6:
            printf("Ńúáîňŕ\n");
            break;
        case 7:
            printf("Íĺäĺë˙\n");
            break;
        default:
            printf("Ăđĺřęŕ! Íĺâŕëčäíî ÷čńëî.\n");

    /*primer-cikli*/
    int i;
    for (i=1,i<=10;i=i+1)
    {
        printf("%d",i);
    }
    /*for(inicializaciq,uslovie,aktualizaciq)*/
    /*inicializaciq*/
    /*while(uslovie){
        tqlo
        aktualizaciq
    }*/
    int j;
    while(j<=10)
    {
        j=j+1;
        printf("%d",j)
    }
    /*do-while
    inicialiaciq
    do
    {
        //tqlo
        aktualizaciq
    }
    while(uslovie)*/
    int k=10;
    do
    {
        printf("%d",k);
        k++;
    }
    while(k<=10);


    /*uprajnenie*/
    /*1*/
    int n, i, j;
    printf("Âúâĺäĺňĺ ÷čńëî: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n")
    }
    /*2*/
    int a, b, i, sum = 0;
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî ŕ ");
    scanf("%d", &a);
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî b ");
    scanf("%d", &b);
    if(a < b)
        for(i = a+1; i < b; i++)
            sum += i;
    else
        for(i = b+1; i < a; i++)
            sum += i;

    printf("%d",sum)
    /*3*/
    int a, b, i;
    int sumEven = 0;
    int multOdd = 1;

    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî ŕ ");
    scanf("%d", &a);
    printf("Âúâĺäĺňĺ ö˙ëî ÷čńëî b ");
    scanf("%d", &b);

    if(a < b)
    {
        for(i = a + 1; i < b; i++)
        {
            if(i % 2 == 0)
                sumEven += i
            else
                multOdd *= i;
        }
    }
    else if(a > b)
    {
        for(i = b + 1; i < a; i++)
        {
            if(i % 2 == 0)
                sumEven += i;
            else
                multOdd *= i;
        }
    }
    printf("Ńóěŕ íŕ ÷ĺňíčňĺ: %d\n", sumEven);
    printf("Ďđîčçâĺäĺíĺčňî íŕ íĺ÷ĺňíčňĺ: %d\n", multOdd);

    /*5*/
    int num;
    int sum = 0;
    printf("Âúâĺäĺňĺ ÷čńëŕ (0 çŕ ęđŕé):\n");
    scanf("%d", &num);
    while(num != 0)
    {
        sum += num;
        scanf("%d", &num);
    }
    printf("Ńáîđúň íŕ ÷čńëŕňŕ ĺ: %d\n", sum);

    return 0;

}

/*1.Äŕ ńĺ ďđî÷ĺňĺ ÷čńëî îň ęëŕâčŕňóđŕňŕ ĺäíî öĺëî÷čńëĺíî ÷čńëî č äŕ ńĺ čçâĺäĺ ńúîáůĺíčĺ ŕęî ňî ĺ ďî-ăîë˙ěî îň 6*/
/*2.Äŕ ńĺ ďđî÷ĺňĺ ÷čńëî îň ęëŕâčŕňóđŕňŕ ĺäíî öĺëî÷čńëĺíî ÷čńëî č äŕ ńĺ čçâĺäĺ ńúîáůĺíčĺ ŕęî îńňŕňúęŕ îň äĺëĺíčňî ń 8 ĺ ďî-ăîë˙ěî îň 4*/
/*3.Äŕ ńĺ ďđî÷ĺňŕň îň ęëŕâčŕňóđŕňŕ 3 ÷čńëŕ č äŕ ńĺ čçâĺäĺ íŕ ĺęđŕíŕ íŕé-ěŕëęîňî îň ň˙ő.*/
/*4. Äŕ ńĺ ďđî÷ĺňĺ îň ęëŕâčŕňóđŕňŕ öčôđŕ č äŕ ńĺ čçâĺäĺ íŕ ĺęđŕíŕ íĺéíîňî čěĺ. Äŕ ńĺ čçďîëçâŕ îďĺđŕňîđ switch-case.*/
/*5. Äŕ ńĺ ďđî÷ĺňĺ îň ęëŕâčŕňóđŕňŕ ĺäíî ÷čńëî îň 1 äî 7 č äŕ ńĺ čçâĺäĺ íŕ ĺęđŕíŕ ęîé äĺí îň ńĺäěčöŕňŕ ńúîňâĺňńňâŕ íŕ ňîâŕ ÷čńëî. Äŕ ńĺ ďđĺäâčäč ńëó÷ŕé, ęîăŕňî íĺ ĺ âúâĺäĺíî âŕëčäíî ÷čńëî.*/
