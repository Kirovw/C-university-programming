#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/* âúâåæäàíå íà äâóìåðåí ìàñèâ */
void array_input(int row, int col, int arrss[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arrss[i][j]);
        }
    }
}

/* èçâåæäàíå íà äâóìåðåí ìàñèâ */
void array_print(int row, int col, int arrss[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d\t", arrss[i][j]);
        }
        printf("\n");
    }
}

/* ðàçìåíÿ ðåäà ñ ìèíèìàëåí è ðåäà ñ ìàêñèìàëåí åëåìåíò */
void array_rotate(int row, int col, int arrss[row][col])
{
    int min = arrss[0][0];
    int max = arrss[0][0];
    int ind_min = 0;
    int ind_max = 0;
    int temp;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arrss[i][j] < min)
            {
                min = arrss[i][j];
                ind_min = i;
            }
            if(arrss[i][j] > max)
            {
                max = arrss[i][j];
                ind_max = i;
            }
        }
    }

    if(ind_min != ind_max)
    {
        for(int j = 0; j < col; j++)
        {
            temp = arrss[ind_min][j];
            arrss[ind_min][j] = arrss[ind_max][j];
            arrss[ind_max][j] = temp;
        }
    }
}

/* ïðîâåðêà çà ïàëèíäðîì */
int palindrome(char string[20])
{
    int i = 0;
    int j = strlen(string) - 1;

    while(i < j)
    {
        if(string[i] != string[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    /* åäíîìåðåí ìàñèâ */
    int arra[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arra[i]);
    }

    for(int i = 9; i >= 0; i--)
    {
        printf("array[%d] = %d\n", i, arra[i]);
    }

    /* ðàáîòà ñúñ ñòðèíã */
    char s2[20];
    scanf("%s", s2);

    if(palindrome(s2))
        printf("Palindrom\n");
    else
        printf("Ne e palindrom\n");

    /* ïðîâåðêà çà ïîâòàðÿùè ñå åëåìåíòè */
    int arrrr[10] = {2,4,6,10,13,15,5,7,8,9};
    bool fl = true;

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arrrr[i] == arrrr[j])
            {
                fl = false;
                break;
            }
        }
        if(!fl)
            break;
    }

    if(fl)
        printf("Nqma povtarqshti se elementi\n");
    else
        printf("Ima povtarqshti se elementi\n");

    /* äâóìåðåí ìàñèâ */
    int ar1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,1,2}};
    ar1[1][2] = 70;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }

    /* íàìèðàíå íà ðåä ñ ìèíèìàëíà ñóìà */
    int min_sum = 0;

    for(int i = 0; i < 3; i++)
    {
        int suma = 0;
        for(int j = 0; j < 4; j++)
        {
            suma += ar1[i][j];
        }

        printf("Suma na red %d = %d\n", i, suma);

        if(i == 0 || suma < min_sum)
        {
            min_sum = suma;
        }
    }

    printf("Minimalna suma = %d\n", min_sum);

    return 0;
}
