#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, exponent;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter degree of number: ");
    scanf("%d", &exponent);
    int result = 1;
    for(int i = 1; i<=exponent; ++i)
    {
        result *= number;
    }
    printf("%d^%d = %d", number, exponent, result);
    return 0;
}
