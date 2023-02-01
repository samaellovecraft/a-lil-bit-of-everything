#include <stdio.h>
#include <ctype.h>

int main() {
	char answer;
	printf("Would you like to blow up the moon? (Y/n) ");
	scanf("%c", &answer);
	answer = toupper(answer);
	switch(answer) {
		case 'Y':
			puts("BOOM");
			break;
		case 'N':
			puts("The moon is safe!");
			break;
		default:
			puts("Indecision can be fatal!");
	}
	return 0;
}

