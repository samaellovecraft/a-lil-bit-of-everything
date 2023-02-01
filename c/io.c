#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("Enter three characters: ");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("'%c' '%c' '%c'\n", a,b,c);
	return 0;
}

