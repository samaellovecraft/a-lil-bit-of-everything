#include <stdio.h>

int main(void) {
    // int
    int x;
    printf("Enter the integer number x: ");
    scanf("%i", &x); // pass by reference, because no function can change the value of x
    printf("The value of x: %i.\n", x);
    
    // string
    char s[21];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("Your string: %s.\n", s);
    
    return 0;
}