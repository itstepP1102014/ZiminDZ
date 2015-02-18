#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, number2, result = 1;
    printf("Enter number n>=0: ");
    scanf("%d", &number);
    printf("Enter the numbers separated by spaces, no more than n: \n");
    int i = 1;
    while(i<=number)
    {
        printf("Enter %d number", i);
        scanf("%d", &number2);
        result *= number2;
        ++i;
    }
    printf("Product numbers: %d", result);
    return 0;
}
