#include <stdio.h>
#include <stdlib.h>
void sort(int *array, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main() {
    FILE *fp, *ftxt;
    int *array;
    int n, i;

    if ((fp = fopen("numbers.bin", "rb")) == NULL) {
        printf("Cannot open binary file.\n");
        exit(1);
    }

    array = (int *)malloc(n * sizeof(int));
    fread(array, sizeof(int), n, fp);

    fclose(fp);

    sort(array, n);
    if ((ftxt = fopen("sorted.txt", "w")) == NULL) {
        printf("Cannot open text file.\n");
        exit(2);
    }
    for (i = 0; i < n; i++) {
        fprintf(ftxt, "%d ", array[i]);
    }
    fclose(ftxt);

