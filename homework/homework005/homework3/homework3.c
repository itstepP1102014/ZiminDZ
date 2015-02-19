#include <stdio.h>

int main()
{
    int number, number2, max, min;
    printf("Enter number n>=0: ");
    scanf("%d", &number);
    printf("Enter the numbers separated by spaces, no more than n: \n");
    int i = 1;
    printf("Enter %d number", i);
    scanf("%d", &max);
    min = max;
    while(i<number)
    {
        printf("Enter %d number", i+1);
        scanf("%d", &number2);
        if(number2 >= max)
        {
            max = number2;
        }
        else if (number2 <= min)
        {
            min = number2;
        }
        ++i;
    }
    printf("The max number: %d. The min number is %d", max, min);
    return 0;
}

