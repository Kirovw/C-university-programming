#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5
char *M[SIZE] = {
    "1-vuvejdane na chisla (0 za krai)",
    "2-izvejdane",
    "3-suma v interval",
    "4-izhod"
};
int* input(int *br, int *mas);
void out(int br, int *mas);
int sum_interval(int br, int *mas);

int main()
{
  int cod, n = 0, *p = NULL, flag = 0;

    do {
        for (int i = 0; i < SIZE; i++)
            puts(M[i]);
        printf("izberete kod: ");
        scanf("%d", &cod);

        switch (cod) {
            case 1:
                p = input(&n, p);
                flag = 1;
                break;
            case 2:
                if (flag == 1)
                    out(n, p);
                else
                    printf("Izberete parvo 1!\n");
                _getch();
                break;
            case 3:
                if (flag == 1)
                {
                    printf("Suma v intervala = %d\n", sum_interval(n, p));
                }
                else
                    printf("Izberete parvo 1!\n");
                _getch();
                break;
            case 4:
                if (p != NULL)
                free(p);
                break;
            default:
                printf("Greshen kod!\n");
        }
    }while (cod != 4);
    return 0;
}
}

int* input(int *br, int *mas)
{
    int k=0;
    printf("Vavedete razmer:\n");
    scanf("%d",&k);
    mas = (int*)malloc(k * sizeof(int));
    printf("Vuvejdajte chisla (0 za krai):\n");
    while (scanf("%d", &num) && num != 0) {
        mas[*br] = num;
        (*br)++;
        if (*br >= 100)
        break;
    }
    mas = (int*)realloc(mas, k * sizeof(int));
    return mas;
}
void out(int br, int *mas) {
    for (int i = 0; i < br; i++) {
        printf("mas[%d] = %d\n", i, *(mas + i));
    }
}
int sum_interval(int br, int *mas) {
    int start, end, suma = 0;
    printf("Nachalen indeks: ");
    scanf("%d", &start);
    printf("Kraen indeks: ");
    scanf("%d", &end);

    if (start < 0)
        start = 0;
    if (end >= br)
        end = br - 1;

    for (int i = start; i <= end; i++) {
        suma += mas[i];
    }
    return suma;
}
