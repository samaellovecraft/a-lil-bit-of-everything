#include <stdio.h>

int main() {
    int num = 5;
    int *pnum = &num;
    printf("num = %d\n",*pnum);
    return 0;
}

