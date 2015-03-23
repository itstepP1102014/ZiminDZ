#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()
{
    int n, i, j;
    printf("Enter an odd number: \n");
    scanf("%d", &n);
    universalClear();
    if(n % 2 != 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if((i + j == n/2+2) || (j - i == n/2) ||
                        (i - j == n/2) || (i + j == n + n/2 + 1))
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
    }
    else
    {
        printf("Wrong number!!!");
        exit(1);
    }
    return 0;
}
