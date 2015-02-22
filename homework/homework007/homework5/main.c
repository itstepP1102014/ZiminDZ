#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n)
    {
        result += n % 10;
        n /= 10;
    }
    printf("The sum of digits: %d.", result);
    return 0;
}
