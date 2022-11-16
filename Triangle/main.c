#include <stdio.h>

void repchar(char c, int cnt) {
    int i;

    for (i = 0; i < cnt; i += 1) {
        printf("%c", c);
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    int i, j, r;
    int crc = 0;
    scanf("%d", &r);

    for (i = r; i > 0; i -= 1) {
        repchar('#', ++crc);
    }

    getch();
}