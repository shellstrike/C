#include <stdio.h>

//Write a program in C to count a total number of duplicate elements in an array.
int main(int argc, char *argv[]) {
    int arr[3];
    int dups = 0;

    for (int i = 0; i < 3; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] == arr[j]) {
                dups++;
            }
        }
    }

    printf("Total duplicates found in the array: %d", dups);

    getch();
}