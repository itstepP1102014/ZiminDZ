#include <stdio.h>
#include <stdlib.h>
int main()

{
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf(" %d",&b);
	printf("c=");
	scanf("  %d",&c);
	printf("d=");
	scanf("   %d",&d);
	printf("%d\n %d\n %d\n %d\n", a*2,b*2,c*2,d*2);
	return 0;
}
