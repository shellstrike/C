#include <stdio.h>

int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 1) {
        sum += arr[i];
    }
    
    return sum;
}

//Write a program in C to find the sum of all elements of the array.
int main(int argc, char *argv[]) {
    int arr[3];

    for (int i = 0; i < 3; i += 1) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Sum of elements: %d", array_sum(arr, 3));

    getch();
}