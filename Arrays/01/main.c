#include <stdio.h>

#define SIZE(collection)   (sizeof(collection)/sizeof(collection[0]))

void printarr(int arr[], int size) {
    for (int i = 0; i < size; i += 1) {
        printf("[%d]: %d\n", i, arr[i]);
    }
}

//Write a program in C to store elements in an array and print it.
int main(int argc, char *argv[]) {
    int arr[10];
    int arr_size = SIZE(arr);

    for (int i = 0; i < arr_size; i += 1) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printarr(&arr, arr_size);

    getch();
}