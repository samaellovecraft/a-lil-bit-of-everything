#include <stdio.h>

int main(void) {
	float i = -5;
	while (i <= 5) {
		printf("%1.1f\n", i);
		i = i + 0.5;
	}
	return 0;
}

