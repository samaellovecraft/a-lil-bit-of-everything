#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums = (int *)malloc(sizeof(int)*3);
    if (nums == NULL) {
        puts("Unable to allocate memory.");
        exit(1);
    }
    for (int i=0;i<3;i++) {
        *(nums+i) = (i+1) * 100;
        printf("%d\n",nums[i]);
    }
    return 0;
}


