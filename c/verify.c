#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limit(int stop);
int verify(int value);

int main() {
	int s;

	printf("Enter a stopping value (0-100): ");
	scanf("%d", &s);
	int check = verify(s);
	if (check == 0) {
		printf("Wrong value");
		return 1;
	}
	printf("Check: %d\n\n", check);
	limit(s);
	return 0;
}

void limit(int stop) {
	int x;

	for (x=0; x<=100; x++) {
		printf("%d ", x);
		if (x==stop){
			puts("You won!");
			return;
		}
	}
	puts("I won!");
}

int verify(int value){
	if (value>=0 && value<=100) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

