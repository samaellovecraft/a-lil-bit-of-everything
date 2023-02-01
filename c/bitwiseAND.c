#include <stdio.h>

char *binbin(unsigned char n);

int main() {
    const int set = 85;
    unsigned int bor,result;

    printf("Type a value from 0 to 255: ");
    scanf("%u",&bor);
    result = bor & set;

    printf("\t%s\t%d\n",binbin((unsigned char)bor),bor);
    printf("&\t%s\t%d\n",binbin((unsigned char)set),set);
    printf("=\t%s\t%d\n",binbin((unsigned char)result),result);
    return 0;
}

char *binbin(unsigned char n) {
    static char bin[9];
    int i;
    for (i=0;i<8;i++) {
        bin[i] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[i] = '\0';
    return bin;
}

