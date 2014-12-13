#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, max, min, j, q, r;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    max = a > b? a : b;
    min = a > b? b : a;
  do
  {
      if(max>min)
    {
        r = max - min;
        max=r;
    }
    else
    {
       if (min>max)
       {
        q = min - max;
        min=q;
       }
       else
       {
        j =  max - min;
        max=j;
       }
    }
  } while (max != min);
    printf("The gcd of %d and %d: %d .", a, b, max);

    return 0;
}
