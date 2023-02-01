#include <stdio.h>

int main() {
    int array[] = {2,3,5,7,11};
    printf("'array' is at address %p\n",&array);
    printf("'array' is at address %p\n",array);
    return 0;
}

