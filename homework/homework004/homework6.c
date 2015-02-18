#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L, x, result = 1, p = 0;
    printf("Enter number L > 0: ");
    scanf("%d", &L);
    printf("Enter number x<=L: ");
    scanf("%d", &x);
    do
    {
        result*=x;
        ++p;
    }while(result<=L);
    printf("Your degree is %d", p-1);
    return 0;
}
