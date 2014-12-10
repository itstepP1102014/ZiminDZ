#include <stdio.h>

int main(void)

{
	int a, b;
	do
	{
		int max, min;
		printf("enter first number: ");
		scanf("%d", &a);
		printf("enter second number: ");
		scanf("%d", &b);
		max = a>b? a:b;
		min = a<b? a:b;
		printf("a=%d b=%d |\tmax - %d  min - %d\n", a, b, max, min);
	} while (a >= 1);
return 0;
}
	
