#include <stdio.h>


int strlen(char str[]);
char toupper(char c);
void bigstr(char str[]);


int main(void) {
    printf("Before: ");
    char name[21];
    scanf("%s", name);
    printf("After: ");
    bigstr(name);
    printf("\n");
    return 0;
}

int strlen(char str[]) {
    // determines string length
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }
    return n;
}

char toupper(char c) {
    // transforms char to uppercase
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    else {
        return c;
    }
}

void bigstr(char str[]) {
    // prints an uppercase string
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", toupper(str[i]));
    }
}