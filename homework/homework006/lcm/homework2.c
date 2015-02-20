#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, c, lcm;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = a * b;
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    lcm = c / (a+b);
    printf("The lcm is %d", lcm);
    return 0;
}
