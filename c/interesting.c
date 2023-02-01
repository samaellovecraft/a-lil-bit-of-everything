#include <stdio.h>

int main() {
    char alpha = 'A';
    char *pa; 

    pa = &alpha;

    for (int i=0;i<26;i++)
        putchar((*pa)++);
    putchar(*pa);
    putchar('\n');
    return 0;
}
