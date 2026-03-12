#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1*/
    int num;
    printf("Въведете цяло число: \n");
    scanf("%d",&num);
    if(num<6)
    {
        printf("Числото е по-голямо от 6");
    }
    /*2*/
    if(num%8>4)
    {
        printf("Oстатъкът от деленито с 8 е по-голям от 4");
    }
    /*3*/
    int a, b, c, min;

    printf("Въведете цяло число 1: ");
    scanf("%d", &a);
    printf("Въведете цяло число 2: ");
    scanf("%d", &b);
    printf("Въведете цяло число 3: ");
    scanf("%d", &c);
    min = a;
    if (b < min){
        min = b;}
    if (c < min){
        min = c;}
    printf("Най-малкото число е: %d\n", min);

    /*4*/
    int digit;

    printf("Въведете цифра (0-9): ");
    scanf("%d", &digit);

    switch(digit)
    {
        case 0:
            printf("нула\n");
            break;
        case 1:
            printf("едно\n");
            break;
        case 2:
            printf("две\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четири\n");
            break;
        case 5:
            printf("пет\n");
            break;
        case 6:
            printf("шест\n");
            break;
        case 7:
            printf("седем\n");
            break;
        case 8:
            printf("осем\n");
            break;
        case 9:
            printf("девет\n");
            break;
        default:
            printf("Грешка! Това не е цифра.\n");

    /*5*/
    int day;
    printf("Въведете число от 1 до 7: ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Понеделник\n");
            break;
        case 2:
            printf("Вторник\n");
            break;
        case 3:
            printf("Сряда\n");
            break;
        case 4:
            printf("Четвъртък\n");
            break;
        case 5:
            printf("Петък\n");
            break;
        case 6:
            printf("Събота\n");
            break;
        case 7:
            printf("Неделя\n");
            break;
        default:
            printf("Грешка! Невалидно число.\n");

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
    printf("Въведете число: ");
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
    printf("Въведете цяло число а ");
    scanf("%d", &a);
    printf("Въведете цяло число b ");
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

    printf("Въведете цяло число а ");
    scanf("%d", &a);
    printf("Въведете цяло число b ");
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
    printf("Сума на четните: %d\n", sumEven);
    printf("Произведенеито на нечетните: %d\n", multOdd);

    /*5*/
    int num;
    int sum = 0;
    printf("Въведете числа (0 за край):\n");
    scanf("%d", &num);
    while(num != 0)
    {
        sum += num;
        scanf("%d", &num);
    }
    printf("Сборът на числата е: %d\n", sum);

    return 0;

}

/*1.Да се прочете число от клавиатурата едно целочислено число и да се изведе съобщение ако то е по-голямо от 6*/
/*2.Да се прочете число от клавиатурата едно целочислено число и да се изведе съобщение ако остатъка от деленито с 8 е по-голямо от 4*/
/*3.Да се прочетат от клавиатурата 3 числа и да се изведе на екрана най-малкото от тях.*/
/*4. Да се прочете от клавиатурата цифра и да се изведе на екрана нейното име. Да се използва оператор switch-case.*/
/*5. Да се прочете от клавиатурата едно число от 1 до 7 и да се изведе на екрана кой ден от седмицата съответства на това число. Да се предвиди случай, когато не е въведено валидно число.*/
