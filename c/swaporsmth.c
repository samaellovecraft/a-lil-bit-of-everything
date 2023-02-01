#include <stdio.h>

void swap(int a, int b);
void realswap(int *a, int *b);

int main(void) {
    int x = 21;
    int y = 69;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    realswap(&x, &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    return 0;
}

void swap(int a, int b) { // passing args by value (a and b are copies of args and stored in the stack)
    int tmp = a;
    a = b;
    b = tmp;
    printf("*MAGIC SWAP*\n");
    printf("(inside of function) a: %d\n", a);
    printf("(inside of function) b: %d\n", b);
}

void realswap(int *a, int *b) { // addresses of integers
    int tmp = *a;
    *a = *b;
    *b = tmp;
}