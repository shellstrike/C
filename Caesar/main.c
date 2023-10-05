#include <stdio.h>

#define SHIFT_SIZE 3
#define MAX_INPUT_LENGTH 256

int isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int isLowerCase(char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int isDigit(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int main() {
    char cleanText[MAX_INPUT_LENGTH];
    char ceaserText[MAX_INPUT_LENGTH];
    int charIndex = 0;

    scanf("%[^\n]s", cleanText);
    
    while (cleanText[charIndex] != '\0') {
        char currentChar = cleanText[charIndex];

        if (isUpperCase(currentChar) == 1) {
            ceaserText[charIndex] = ((currentChar - 'A' + SHIFT_SIZE) % 26 ) + 'A';
        }

        if (isLowerCase(currentChar) == 1) {
            ceaserText[charIndex] = ((currentChar - 'a' + SHIFT_SIZE) % 26 ) + 'a';
        }

        if (isDigit(currentChar) == 1) {
            ceaserText[charIndex] = ((currentChar - '0' + SHIFT_SIZE) % 9 ) + '0';
        }

        charIndex++;
    }

    for (int i = 0; i < charIndex; i++) {
        printf("%c", ceaserText[i]);
    }

    getch();
}