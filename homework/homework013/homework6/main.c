#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("\n");
    a + b > c? printf("a + b > c") : printf("a + b <= c");
    return 0;
}
