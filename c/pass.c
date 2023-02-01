#include <stdio.h>
#include <string.h>

int main() {
	char password[] = "love";
	char input[15];
	int match;
	printf("Password: ");
	scanf("%s", input);

	match=strcmp(input,password);
	if (match==0)
		puts("Password accepted.");
	else
		puts("Invalid password.");
	return 0;
}

