#include <stdio.h>

void printarr_reversed(int arr[], int size) {
    for (int i = size-1; i >= 0; i -= 1) {
        printf("[%d]: %d\n", i, arr[i]);
    }
}

//Write a program in C to read n number of values in an array and display it in reverse order.
int main(int argc, char *argv[]) {
    int n, arr[128];
    printf("Array size (<128): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i += 1) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printarr_reversed(arr, n);

    getch();
}