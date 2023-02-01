#include <stdio.h>
#define SIZE 4

struct scores {
	char name[32];
	int score;
};


void sort_by_score(struct scores arr[], int size);

int main() {
	struct scores player[SIZE];
	for (int i=0;i<SIZE;i++) {
		printf("Enter player %d: ",i+1);
		scanf("%s", player[i].name);
		printf("Enter their score: ");
		scanf("%d", &player[i].score);
	}
	puts("Player info");
	printf("#\tName\tScore\n");
	for (int i=0;i<SIZE;i++)
		printf("%d\t%s\t%5d\n",i+1,player[i].name,player[i].score);
	
	sort_by_score(player,SIZE);
	puts("Sorted");
	printf("#\tName\tScore\n");
	for (int i=0;i<SIZE;i++)
		printf("%d\t\%s\t%5d\n",i+1,player[i].name,player[i].score);


	return 0;
}

void sort_by_score(struct scores arr[], int size) {
	struct scores temp;
	for (int outer = 0; outer < size-1; outer++) {
		for (int inner = outer+1; inner < size; inner++) {
			if (arr[outer].score < arr[inner].score) {
				temp = arr[outer];
				arr[outer] = arr[inner];
				arr[inner] = temp;
			}
		}
	}
}

