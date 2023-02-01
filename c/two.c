#include <stdio.h>

int main(void) {
	
	char first[10];
	char last[10];
	// scanf("%s %s", first, last);
	fgets(first,10,stdin);
	fgets(last,10,stdin);
	printf("Hello, %s %s!\n", first, last);

	return 0;
}
