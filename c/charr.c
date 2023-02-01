#include <stdio.h>
#define S 16

int main() {
	char fn[S], ln[S];
	printf("Enter your fullname: ");
	scanf("%15s %15s", fn, ln);
	printf("Pleased to meet you, %s %s\n",fn,ln);
	return 0;
}

