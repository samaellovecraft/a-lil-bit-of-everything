#include <stdio.h>
#include <string.h>

int main() {
    char *fruit[] = {
        "apricot",
        "pineapple",
        "apple",
        "cherry",
        "persimmon",
        "pear",
        "blueberry",
        "banana"
    };
    char *temp;
    int a,b,x,result;

    for (a=0;a<7;a++)
        for (b=a+1;b<8;b++) {
            result = strcmp(*(fruit+a),*(fruit+b));
            if (result > 0) {
                temp = *(fruit+a);
                *(fruit+a) = *(fruit+b);
                *(fruit+b) = temp;
            }
        }

    for (x=0;x<8;x++)
        puts(fruit[x]);
    return 0;
}

