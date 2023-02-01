#include <stdio.h>

char *binbin(unsigned char n);

int main() {
    int a,x,r;

    a = 73;
    x = 170;

    printf("  %s %3d\n",binbin((unsigned char)a),a);
    printf("^ %s %3d\n",binbin((unsigned char)x),x);
    r = a ^ x;
    printf("= %s %3d\n",binbin((unsigned char)r),r);
    printf("^ %s %3d\n",binbin((unsigned char)x),x);
    a = r ^ x;
    printf("= %s %3d\n",binbin((unsigned char)a),a);
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
