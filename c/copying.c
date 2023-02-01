#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *s1 = "string";
    char *s2 = s1;

    // s2 is the copy of the s1 address (they point to the same value)
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("addr of s1: %p\n", s1);
    printf("addr of s2: %p\n", s2);
    s1[0] = toupper(s1[0]);
    printf("\nAfter the manipulation with s1:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("\n---------------------\n");

    // another copy
    char *s3 = "hi!";
    int s3len = strlen(s3)+1;
    char *s4 = malloc(s3len);
    if (s4 == NULL) {
        return 1;
    }

    // strcpy(s4, s3);
    for (int i = 0; i < s3len; i++) { 
        s4[i] = s3[i];
    }

    printf("\ns3: %s\n", s3);
    printf("s4: %s\n", s4);
    s3[0] = toupper(s3[0]);
    printf("\nAfter the manipulation with s3:\n");
    printf("s3: %s\n", s3);
    printf("s4: %s\n", s4);
    printf("addr of s3: %p\n", s3);
    printf("addr of s4: %p\n", s4);
    free(s4);
    
    return 0;
}