#include <stdio.h>
#include <ctype.h>

int main() {
	char answer;
	printf("Would you like to blow up the moon? (Y/n) ");
	scanf("%c", &answer);
	answer = toupper(answer);
	if (answer=='Y')
		puts("You are hacking monster. Shame on you. Leave the keyboard NOW.");
	else if (answer=='N')
		puts("Thank goddess Celestia!");
	else
		puts("Wrong input!");

	return 0;
}

