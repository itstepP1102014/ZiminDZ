#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{	
	int r, h;
	printf("r= ");
	scanf("%d",&r);
	printf("h= ");
	scanf("%d",&h);
	double V, S;
	printf("V = %.10Lf\n", h/3*3.14*r*r);
	printf("S = %.10Lf\n", 3.14*r*(r+sqrt(r*r+h*h)));
	return 0;
}
