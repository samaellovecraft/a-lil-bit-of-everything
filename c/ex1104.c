#include <stdio.h>

int main() {
	int i = -10;
	while (i < 10) {
 		printf("%d ", i);
		i++;
	}
	while (i >= -10) {
		printf("%d ", i);
		i--;
	}
	return 0;
}

