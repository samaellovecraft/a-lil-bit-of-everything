#include <stdio.h>

int main(void) {
	int ch;
	printf("press enter: ");
	getchar();
	ch = 'h';
	putchar(ch);
	ch = 'i';
	putchar(ch);
	putchar('!');
	putchar('\n');
	printf("first five: ");
	putchar('5');
	putchar('\n');
	printf("second five: ");
	putchar(5);
	ch = 5;
	putchar(ch);
	return 0;
}
