#include <stdio.h>

char *binbin(unsigned n);

int main() {
    unsigned bshift,i;

    printf("Type a value 0 to 65535: ");
    scanf("%u",&bshift);

    for (i=0;i<8;i++) {
        printf("%s %d\n",binbin(bshift),bshift);
        bshift <<= 1;
    }
    return 0;
}

char *binbin(unsigned n) {
    static char bin[17];
    int i;
    for (i=0;i<16;i++) {
        bin[i] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[i] = '\0';
    return bin;
}
