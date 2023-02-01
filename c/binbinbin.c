#include <stdio.h>

char *binbin(unsigned short int n);

int main() {
	unsigned short int input;
	printf("Type a value 0 to 65535: ");
	scanf("%hu",&input);
	printf("%hu is binary %s\n",input,binbin(input));
	return 0;
}

char *binbin(unsigned short int n) {
	static char bin[17];
	int i;
	for (i=0;i<16;i++) {
		bin[i] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[i] = '\0';
	return bin;
}

