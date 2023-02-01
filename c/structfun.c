#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct bot {
	int xpos, ypos;
};

struct bot initialize(struct bot b);

int main() {
	const int size = 5;
	struct bot robots[size];
	srand( (unsigned)time(NULL) );

	for (int i=0;i<size;i++) {
		robots[i] = initialize(robots[i]);
		printf("Robot %d: Coordinates: %d,%d\n",i+1,robots[i].xpos,robots[i].ypos);
	}
	return 0;
}

struct bot initialize (struct bot b) {
	b.xpos = rand() % 20;
	b.ypos = rand() % 20;
	return b;
}

