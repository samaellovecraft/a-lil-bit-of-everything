#include <stdio.h>

void showarray(int array[], int size);
void arrayinc(int array[], int size);


int main() {
	int arr[] = { 2,3,5,7,11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	puts("Here's your array:");
	showarray(arr, size);
	arrayinc(arr, size);
	showarray(arr, size);
	return 0;
}

void showarray(int array[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	putchar('\n');
}

void arrayinc(int array[], int size) {
	for (int i = 0; i < size; i++)
		array[i]++;
}

