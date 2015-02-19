#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, a = 1, b = 1, c;
    printf("Enter the number >= 0: ");
    scanf("%d", &number);
    printf("%d %d ", a, b);
    for(int i = 3; i <= number; ++i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;

    }
return 0;
}
