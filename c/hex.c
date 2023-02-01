#include <stdio.h>

char *binbin(unsigned n);

int main() {
    unsigned b,x;
    b = 0x11;
    for (x=0;x<8;x++) {
        printf("%s 0x%04X %4d\n",binbin(b),b,b);
        b<<=1;
    }
    return 0;
}

char *binbin(unsigned n) {
    static char bin[17];
    int i;
    for (i=0;i<16;i++) {
        bin[i] = n & 0x8000 ? '1' : '0';
        n<<=1;
    }
    bin[i] = '\0';
    return bin;
}

