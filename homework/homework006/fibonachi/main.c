#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Findings of the first 40 Fibonacci numbers: \n");
    double a = 1, b = 1, c = 1;
    printf("%f | %f | %.0f\n", b / a, a / b, c);
    for (int i = 2; i < 40; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%f | %f | %.0f\n", b / a, a / b, c);
    }
    printf("The ratio of adjacent Fibonacci numbers tends to: %f,\n", b / a);
    printf("as for the subsequent to the previous and subsequent to the previous.");
return 0;
}
