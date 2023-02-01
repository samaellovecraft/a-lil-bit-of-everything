#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    for (int i = 0; i<5; i++) {
        printf("%d element of an array has the address %p\n",arr[i],&arr[i]);
    }
    return 0;
}

