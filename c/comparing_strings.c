#include <stdio.h>
#include <string.h>

int main(void) {
    char *s1 = "string";
    char *s2 = "string";

    // == is comparing memory addresses instead of the actual values
    printf("Wrong implementation:\n");
    if (s1 == s2) {
        printf("Same\n\n");
    }
    else {
        printf("Different\n\n");
    }
    
    // note: *s1 == *s2 would compare two first characters
    printf("strcmp() implementation:\n");
    if (strcmp(s1, s2) == 0) {
        printf("Same\n\n");
    }
    else {
        printf("Different\n\n");
    }
    return 0;
}