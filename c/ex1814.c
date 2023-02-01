#include <stdio.h>

int main() {
    int age;
    float weight;
    int *page = &age;
    float *pweight = &weight;
    *page = 22;
    *pweight = 63.3;
    printf("Age: %d\nWeight: %f\n",age,weight);
    return 0;
}

