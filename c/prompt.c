#include <stdio.h>

//void prompt();

int main(void) {
	int loop = 0;
	char input[32];

	while (loop<5) {
		prompt();
		fgets(input,32,stdin);
		loop++;
	}
	return 0;
}

void prompt(void) {
	printf("C:\\DOS> ");
}

