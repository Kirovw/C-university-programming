#include <stdio.h>
#include <stdlib.h>
FILE *fp;
    int num;
    int even = 0, odd = 0;

    if ((fp = fopen("numbers.bin", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while (fread(&num, sizeof(int), 1, fp) == 1) {
        if (num % 2 == 0)
            even+=1;
        else
            odd+=1;
    }

    printf("Even numbers count: %d\n", even);
    printf("Odd numbers count: %d\n", odd);

    fclose(fp);
    return 0;
}
