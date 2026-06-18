#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    int numbers[] = {12, 5, 18, 21, 30, 44, 7, 10, 15, 2};
    int count_ar = 10;

    if ((fp = fopen("numbers.bin", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(numbers, sizeof(int), count_ar, fp) != count_ar) {
        printf("Error writing to file.\n");
    }

    fclose(fp);
    return 0;
}
