#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("You typed %d argument(s).\n", argc);
	for (int i=0;i<argc;i++)
		printf("Arg#%d = %s\n",i+1,argv[i]);
	return 0;
}

