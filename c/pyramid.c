#include <stdio.h>

void ipyramid(int height);
void repyramid(int height);

int main(void) {
    int h;
    printf("Enter the hight of the pyramid: ");
    scanf("%d", &h);
    ipyramid(h);
    repyramid(h);
}

void ipyramid(int height) {
    // prints a bunch of money using iteration
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("$");
        }
        printf("\n");
    }
}

void repyramid(int height) {
    // prints a bunch of hashes using recursion
    if (height <= 0) {
        return;
    }
    repyramid(height - 1);
    for (int i = 0; i < height; i++) {
        printf("#");
    }
    printf("\n");
}
