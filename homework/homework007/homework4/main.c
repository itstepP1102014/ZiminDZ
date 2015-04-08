#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double number, int exponent);

int main()
{
    double number; int exponent;
    printf("Enter the number: ");
    scanf("%lf", &number);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    power(number,exponent);
    printf("%.5f", power(number,exponent));
}


double power(double number, int exponent)
{
    double result = 1.0;
    while (exponent != 0)
    {
        if (exponent % 2 != 0)
        {
            result *= number;
            exponent -= 1;
        }
        number *= number;
        exponent /= 2;
    }
    return result;
}
