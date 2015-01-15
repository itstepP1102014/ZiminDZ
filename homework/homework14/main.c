#include <stdio.h>
#include <stdlib.h>
#include "../../modules/include/mathx.h"

int main()
{
    int n, i, j;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(gcd(i, j) == 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
