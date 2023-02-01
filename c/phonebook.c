#include <stdio.h>

int main(void) {
    char name[21];
    int age;
    char num[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    printf("Enter your phone number: +");
    scanf("%s", num);
    printf("Your phone number is +%s\n", num);
    return 0;
}