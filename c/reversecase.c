#include <stdio.h>
#include <ctype.h>

int main() {
	char str[] = "UPPER lower";
	int index = 0;
	printf("Original: %s\n", str);
	while (str[index]) {
		if (islower(str[index]))
			str[index] = toupper(str[index]);
		else if (isupper(str[index]))
			str[index] = tolower(str[index]);
		index++;
	}
	printf("Modified: %s\n", str);
	return 0;
}
