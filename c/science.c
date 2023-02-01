#include <stdio.h>

char *binbin(char n);

int main() {
	int input;
	printf("Type a value from -128 to 127: ");
	scanf("%d",&input);
	printf("%d is binary %s\n",input,binbin((char)input));
	return 0;
}

char *binbin(char n) {
	static char bin[9];
	int i;
	for (i=0;i<8;i++) {
		bin[i] = n & 128 ? '1' : '0';
		n <<= 1;
	}
	bin[i] = '\0';
	return bin;
}

