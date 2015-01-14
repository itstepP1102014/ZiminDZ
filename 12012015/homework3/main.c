#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

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

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    while(a % b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return b;
}
