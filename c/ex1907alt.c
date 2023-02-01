#include <stdio.h>

int main() {
    char alphabet[26];
    char *palph = alphabet;
    for (int i='A';i<='Z';i++) {
        *palph = i;
        printf("%c\t%p\n",*palph,palph);
        palph++;
    }
    palph = alphabet;
    return 0;
}

