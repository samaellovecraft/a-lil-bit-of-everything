#include <stdio.h>

int main() {
    char *fruit[] = {
        "banana",
        "cherry",
        "apple"
    };
    char *p = *fruit;
    for (int i=0;i<3;i++) {
        while(putchar(*p++))
            ;
    }
    return 0;
}