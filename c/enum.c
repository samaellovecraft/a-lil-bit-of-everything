#include <stdio.h>

int main() {
	enum { a,b=12,c,d=58,e };
	printf("a=%d\n", a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);

	
	return 0;
}
