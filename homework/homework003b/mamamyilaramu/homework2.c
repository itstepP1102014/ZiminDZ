#include <stdio.h>
#include <stdlib.h>

int main()

{
	char mama[]="mama", myila[]="myila", ramu[]="ramu";
	printf("%s %s %s\n", mama, myila, ramu);
	printf("%s %s %s\n", mama, ramu, myila);
	printf("%s %s %s\n", myila, mama, ramu);
	printf("%s %s %s\n", myila, ramu, mama);
	printf("%s %s %s\n", ramu, mama, myila);
	printf("%s %s %s\n", ramu, myila, mama);

	return 0;
}
