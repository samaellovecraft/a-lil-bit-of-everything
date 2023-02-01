#include <stdio.h>

int main(void) {
	char name[5];
	printf("type your name: ");
	scanf("%s", name);
	printf("Hello there, %c!\n", *name);
	return 0;
}

