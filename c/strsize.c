#include <stdio.h>

int main() {
	char string[] = "C Programming is fun!";
	const int size = sizeof(string) / sizeof(string[0]) - 1; // except '\0'
	
	int outer,inner,temp;

	for (outer = 0; outer < size-1; outer++) {
		for (inner = outer+1; inner < size; inner++) {
			if (string[outer] > string[inner]) {
				temp = string[outer];
				string[outer] = string[inner];
				string[inner] = temp;
			}
		}
	}
	puts(string);
	return 0;
}

