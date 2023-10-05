#include <stdio.h>

void repeatChar(char c, int n) {
    for (int i = 0; i <= n; i++) {
        printf("%c", c);
    }
}

int main() {
    int rows, spaces;

    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        spaces = rows - i;

        repeatChar(' ', spaces);
        repeatChar('*', (2 * i));

        printf("\n");
    }

    getch();
}