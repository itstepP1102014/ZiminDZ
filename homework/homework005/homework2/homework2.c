#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x, i, j, p, result = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter degree of number: ");
    scanf("%d", &p);
    if (p>=0)
    {
        for(int i = 1; i<=p; ++i)
        {
            result *= x;
        }
        printf("%d^%d = %d", x, p, result);
    }
    else if (x != 0)
    {

        for(int j = -1; j>=p; --j)
        {
            result *= x;
        }
        printf("%d^%d = %f", x, p, 1.0 / result);
    }
    return 0;
}
