#include <stdio.h>

int main() {
	int const size = 3;
	char caesar[size][9] = {
		"Julius",
		"Augustus",
		"Nero"
	};
	
	for (int i = 0; i < size; i++) 
		puts(caesar[i]);

	return 0;
}

