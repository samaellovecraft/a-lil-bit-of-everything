#include <stdio.h>

int main() {
    char alphabet[26];
    char *palph = alphabet;
    for (int i=0;i<26;i++) {
        *palph++ = 65+i;
        printf("%c\t%p\n",*(palph-1),(palph-1));
    }
    palph = alphabet;
    return 0;
}

