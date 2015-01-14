#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a % b == 0? printf("a/b\n"): printf("a!/b\n");
    b % a == 0? printf("b/a\n"): printf("b!/a\n");
    return 0;
}
