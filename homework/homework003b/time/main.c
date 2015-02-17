#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()

{
    int hh1, hh2, hh3;
    int mm1, mm2, mm3;
    int ss1, ss2, ss3;
    printf("Write down the first timepoint: ");
    printf("Enter hours: ");
    scanf("%d", &hh1);
    printf("Enter minutes: ");
    scanf("%d", &mm1);
    printf("Enter seconds: ");
    scanf("%d", &ss1);

    printf("Write down the second timepoint: ");
    printf("Enter hours: ");
    scanf("%d", &hh2);
    printf("Enter minutes: ");
    scanf("%d", &mm2);
    printf("Enter seconds: ");
    scanf("%d", &ss2);

    printf("Write down the third timepoint: ");
    printf("Enter hours: ");
    scanf("%d", &hh3);
    printf("Enter minutes: ");
    scanf("%d", &mm3);
    printf("Enter seconds: ");
    scanf("%d", &ss3);

    universalClear();
	printf("%02d:%02d:%02d\n", hh1, mm1, ss1);
	printf("%02d:%02d:%02d\n", hh2, mm2, ss2);
	printf("%02d:%02d:%02d\n", hh3, mm3, ss3);

	return 0;
}


