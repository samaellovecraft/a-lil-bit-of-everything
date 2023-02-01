#include <stdio.h>

int main() {
    char string[] = "string";
    char *ps = string; 
    while(putchar(*ps++))
        ;
    return 0;
}

