#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, j = 0;
    printf("Enter the natural number (x >=2): \n");
    scanf("%d", &x);
    for(int i = 1; i <= x; ++i)
    {
        if(x % i == 0)
        {
            ++j;
        }
    }
    if(j == 2)
    {
        printf("%d - natural number.", x);
    }
    else
    {
        printf("%d - not natural number.", x);
    }
    return 0;
}
