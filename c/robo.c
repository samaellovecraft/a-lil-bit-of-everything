#include <stdio.h>

int main() {
    struct robot {
        int alive, xpos, ypos, strength;
        char name[5];
    };
    printf("The robot struct size is %lu\n",sizeof(struct robot));
    return 0;
}

