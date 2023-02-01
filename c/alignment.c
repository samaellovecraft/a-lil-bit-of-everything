#include <stdio.h>

int main() {
	char first[4][21] = {"First", "1", "John", "Thomas"};
	char last[4][21] = {"Last", "2", "Adams", "Jefferson"};
	for (int i = 0; i < 4; i++)
		printf("%-6s %s\n",first[i], last[i]);
	return 0;
}

