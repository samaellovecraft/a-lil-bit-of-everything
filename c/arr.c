#include <stdio.h>
#define SCORES 10

int main() {
	int highscore[SCORES];
	for (int i=0;i<SCORES;i++) {
		printf("Your #%d score: ", i+1);
		scanf("%d", &highscore[i]);
	}
	puts("Here are your high scores");
	for (int i=0;i<SCORES;i++) {
		printf("#%d %d\n",i+1,highscore[i]);
	}
	return 0;
}

