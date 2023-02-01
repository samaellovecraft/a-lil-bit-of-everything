#include <stdio.h>

int main() {
	float marketclose[] = { 24164.95, 24107.08, 24643.63, 24400.93, 23728.53 };
	int size = sizeof(marketclose)/sizeof(marketclose[0]);
	for (int i=0;i<size;i++) {
		printf("Day %d: %f\n", i+1, marketclose[i]);
	}
	printf("Size: %d", size);
	return 0;
}

