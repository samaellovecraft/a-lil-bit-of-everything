#include <stdio.h>

int main() {
	int bubble[] = { 95, 60, 6, 87, 50, 24 };
	
	const int size = sizeof(bubble)/sizeof(bubble[0]);
	int inner, outer, temp;
	
	puts("Original array:");
	for (int i = 0; i < size; i++) {
		printf("%d\t", bubble[i]);
	} 
	putchar('\n');

	// Bubble sort
	for (outer = 0; outer < size-1; outer++) {
		for (inner = outer+1; inner < size; inner++) {
			if (bubble[outer] > bubble[inner]) {
				temp = bubble[outer];
				bubble[outer] = bubble[inner];
				bubble[inner] = temp;
			}
		}
	}

	puts("Sorted array:");
	for (int i = 0; i < size; i++) {
		printf("%d\t", bubble[i]);
	}
	putchar('\n');
	
	return 0;
}
