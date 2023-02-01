#include <stdio.h>
#include <math.h>

int main() {
	const float NUM = 2;
	for (int power = 0; power <= 10; power++) {
		printf("%.0f^%d = %.0f\n", NUM,power,pow(NUM,power));
	}
	return 0;
}
