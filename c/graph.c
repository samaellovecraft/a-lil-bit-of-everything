#include <stdio.h>

void graph(int count, char ch);

int main() {
	int value = 2;
	int ch = '*';
	while (value <= 64) {
		graph(value, ch);
		printf("Value is %d\n",value);
		value = value*2;
	}
	return 0;
}

void graph(int count, char ch) {
	for (int x=0;x<count;x++)
		putchar(ch);
	putchar('\n');
}

