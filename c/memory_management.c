#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    printf("enter 3 characters or you'll be dead in 3 seconds:\n");
    char *s1 = "string";
    
    scanf("%s", s1);
    printf("%s", s1);
}