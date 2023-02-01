#include <stdio.h>

int main(void) {
    char friend[21];
    int n;
    char answer[3];
    printf("What's your name?\n");
    scanf("%s", friend);
    printf("Hello, %s! What's your favorite number?\n", friend);
    scanf("%d", &n);
    printf("Your favorite number is %d? Let's be friends! (yes/no)\n", n);
    scanf("%s", answer);
    if (answer == "yes") {
        printf("We're friends now!\n");
    }
    else {
        printf("So sad...\n");
    }
    return 0;
}