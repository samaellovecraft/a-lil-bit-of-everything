#include <stdio.h>

int main() {
	float degrees,radians;
	printf("Enter an angle in radians: ");
	scanf("%f", &radians);
	degrees = radians*57.2957795;
	printf("%.2f radians is %.2f degrees.\n",radians,degrees);
	return 0;
}

