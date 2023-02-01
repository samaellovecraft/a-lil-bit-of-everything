#include <stdio.h>

int main() {
	struct player {
		char name[32];
		int highscore;
		float hours;
	};
	struct player xbox;

	printf("Enter the player's name: ");
	scanf("%s",xbox.name);
	printf("Enter their high score: ");
	scanf("%d",&xbox.highscore);
	printf("Hours played: ");
	scanf("%f",&xbox.hours);
	
	printf("Player %s has a high score of %d in %.1f hours.\n",xbox.name,xbox.highscore,xbox.hours);
	return 0;
}

