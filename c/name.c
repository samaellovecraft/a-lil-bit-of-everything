#include <stdio.h>

int main(void) {
	const int SIZE = 10;
	char name[SIZE];
	fgets(name,SIZE,stdin);
	printf("Glad to meet you, %s.\n", name);
	return 0;
}

