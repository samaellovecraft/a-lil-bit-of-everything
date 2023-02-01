#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secret, guess;
	srand( (unsigned)time(NULL) );
	secret = (rand() % 20) + 1;
	printf("Enter the number between (1-20): ");
	scanf("%i", &guess);
	if (secret == guess)
		puts("YOU WON!!!");
	else
		printf("You lose, the secret is %d", secret);

	return 0;
}



