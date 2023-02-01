#include <stdio.h>
#include <ctype.h>

int main() {
    char input[64];
    int ch;
    int i = 0;

    printf("Type in some text: ");
    fgets(input,63,stdin);

    while (input[i] != '\n') { 
        ch = input[i];
        if (isalpha(ch))
            ch &= 223;
        putchar(ch);
        i++;
        
    }
    putchar('\n');

    return 0;
}

