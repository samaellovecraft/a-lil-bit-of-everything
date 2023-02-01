#include <stdio.h>
#include <math.h>

int main() {
	int first[] = {10,12,14,15,16,18,20};
	int size = sizeof(first)/sizeof(first[0]);
	float second[size];
	for (int i=0;i<size;i++) {
		second[i] = sqrt( (float)first[i] );
		printf("first[%d] = %d\tsecond[%d] = %f\n", i,first[i],i,second[i]);
	}
	return 0;
}

