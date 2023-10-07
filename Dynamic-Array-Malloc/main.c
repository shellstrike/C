#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;

    scanf("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        return EXIT_FAILURE;
    }

    int index = 0;

    for (int i = 2; i <= pow(2, n); i *= 2) {
        array[index++] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("%d \n", array[i]);
    }

    getch();
}