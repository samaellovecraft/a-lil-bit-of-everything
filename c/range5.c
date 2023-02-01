#include <stdio.h>

int main() {
	int i;
	for (i = -5; i < 5; i++) {
		printf("%d ", i);
	}
	for (; i >= -5; i--) {
		printf("%d ", i);
	}
	printf("\n\n%d", i); 
	return 0;
}

