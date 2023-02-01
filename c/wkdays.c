#include <stdio.h>

int main() {
    enum weekdays { mon, tue, wed, thu, fri };
    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };
    printf("The temperature on Tuesday was %.1f\n",*(temps+tue));
    printf("The temperature on Friday was %.1f\n",*(temps+fri));
    return 0;
}

