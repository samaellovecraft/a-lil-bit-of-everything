#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *age;
	
	/* allocate memory */
	age = (int *)malloc(sizeof(int)*1);
	if (age==NULL)
	{
		puts("Out of memory or something!");
		exit(1);
	}
	/* use memory */
	printf("How old are you?");
	scanf("%d",age);
	*age *= 365;
	printf("you're over %d days old!",*age);
    free(age);
    return 0;
}
