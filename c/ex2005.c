#include <stdio.h>
#include <stdlib.h>

int main() {
    const int bufsize = 1024;
    char *input, *output, *i, *o;

    input = (char *)malloc(sizeof(char)*bufsize);
    output = (char *)malloc(sizeof(char)*bufsize);
    if (input == NULL || output == NULL) {
        puts("Not enough memory.");
        exit(1);
    }
    puts("Input your text:");
    fgets(input,bufsize,stdin);
    o = output;
    i = input;
    while (*i != '\n') {
        *o++ = *i++;
    }
    *o = '\0';
    puts("input:");
    printf("\"%s\"\n",input);
    puts("output:");
    printf("\"%s\"\n",output);
    return 0;
}


