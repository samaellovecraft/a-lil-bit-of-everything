#include <stdio.h>

int main() {
    int nums[10];
    int i;
    int *pnums;

    pnums = nums;

    for (i=0;i<10;i++) {
        *pnums = i+1;
        printf("nums[%d] = %d and at addr %p\n",i,*pnums,pnums);
        pnums++;
    }
    return 0;
}



