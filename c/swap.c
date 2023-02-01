#include <stdio.h>

void swap(int *a,int *b);

int main() {
    int n1 = 21;
    int n2 = 69;
    printf("The first number is %d\n",n1);
    printf("The second number is %d\n",n2);
    swap(&n1,&n2);
    printf("The first number is %d\n",n1);
    printf("The second number is %d\n",n2);
    return 0;
}

void swap(int *a,int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}






