#include <stdio.h>

int main() {
    char input[64];
    int ch;
    int i = 0;

    printf("Type in ALL CAPS: ");
    fgets(input,63,stdin);

    while (input[i] != '\n') {
        ch = input[i] | 32;
        putchar(ch);
        i++;
    }
    putchar('\n');

    return 0;
}

