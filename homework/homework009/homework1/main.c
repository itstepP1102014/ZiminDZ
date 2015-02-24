#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Enter first number: ");
    scanf("%d", &m);
    printf("Enter second number: ");
    scanf("%d", &n);
    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if(j % 2 == 0)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if (i % 2 == 0)
        {
        printf("\n");
        }
        else
        {
            printf("\n"
                   " ");
        }
    }
    return 0;
}
