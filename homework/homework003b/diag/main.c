#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()

{
	int a,b,c,d;
	printf("a= ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	printf("c= ");
	scanf("%d", &c);
	printf("d= ");
	scanf("%d", &d);

	universalClear();
	printf("%*d\n %*d\n %*d\n %*d\n", 1, a*2, 2, b*2, 4, c*2, 6, d*2);
	return 0;
}
