#include <stdio.h>

//Write a program in C to print all unique elements in an array.
int main(int argc, char *argv[]) {
    int arr[4], non_unique;

    for (int i = 0; i < 4; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are: ");

    for (int i = 0; i < 4; i++) {
        non_unique = 0;
        
        for (int j = 0; j < 4; j++) {
            if (arr[i] == arr[j]) {
                non_unique++;
            }
        }

        if (non_unique <= 1) {
            printf("%d ", arr[i]);
        }
    }

    getch();
}