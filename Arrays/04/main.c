#include <stdio.h>

void printArray(int arr[]) {
    for (int i = 0; i < 3; i += 1) {
        printf("%d ", arr[i]);
    }
}

void copyArray(int original[], int copy[]) {
    for (int i = 0; i < 3; i += 1) {
        copy[i] = original[i];
    }
}

//Write a program in C to copy the elements of one array into another array.
int main(int argc, char *argv[]) {
    int arr[3], copy[3];

    for (int i = 0; i < 3; i += 1) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    copyArray(arr, copy);

    printf("Original array: ");
    printArray(arr);
    printf("\n");
    printf("Copied array: ");
    printArray(copy);

    getch();
}