#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	int x;
	signed int p;

	printf("Number x= ");
	scanf("%d", &x);
	printf("Degree p= ");
	scanf("%d", &p);
	printf("%f", pow(x,p));

return 0;
}
