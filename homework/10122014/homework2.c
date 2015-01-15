#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	int x, q;
	signed int p;
	double y, result;
	printf("Number x= :");
	scanf("%d", &x);
	printf("Degree p= :");
	scanf("%d", &p);
	if (p>=0)
	{
	y=x;
	q=p;
	result *=x;
	printf("%f", result);
	}
	else
	{
	y=1.0/x;
	q=-p;
	result *= 1.0/x;
	printf("%f", result); 
	}

return 0;
}
