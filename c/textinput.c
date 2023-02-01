#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input = (char *)malloc(sizeof(char)*1024);
    if (input==NULL) {
        puts("Unable to allocate buffer!");
        exit(1);
    }
    puts("Type something long and boring:");
    fgets(input,1024,stdin);
    char *output = (char *)malloc(sizeof(char)*1024);
    if (output==NULL) {
        puts("Unable to allocate buffer!");
        exit(1);
    }
    strncpy(output,input,strlen(input)-1);
    puts("You wrote:");
    printf("\"%s\"\n",output);
    return 0;
}

