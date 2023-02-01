#include <stdio.h>

int main() {
    char *fruit[] = {
        "watermelon",
        "banana",
        "pear",
        "coconut",
        "grape",
        "blueberry",
        "cherry"
    };
    for (int i=0; i<7; i++) {
        while ( putchar(*(*(fruit+i))++) )
            ;
        putchar('\n');
    }
    return 0;
}
