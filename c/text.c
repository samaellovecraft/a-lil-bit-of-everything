#include <stdio.h>
#include <ctype.h>

int main() {
	char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the separate and equal station to which the Laws of Nature and of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation.";

	int index,alpha,space,punct,lower,upper;
	index = alpha = space = punct = lower = upper = 0;

	/* gather data */
	while(phrase[index]) {
		if(isspace(phrase[index]))
			space++;
		else if(ispunct(phrase[index]))
			punct++;
		else if(isalpha(phrase[index])) {
			alpha++;
			if (islower(phrase[index]))
				lower++;
			else 
				upper++;
		}
		index++;
	}
	
	/* print results */
	printf("\"%s\"\n",phrase);
	puts("Statistics:");
	printf("%04d overall characters\n",index);
	printf("%04d alphabetic characters\n",alpha);
	printf("%04d spaces\n",space);
	printf("%04d punctuation symbols\n",punct);
	printf("%04d lower characters\n",lower);
	printf("%04d upper characters\n",upper);
	return(0);
}
