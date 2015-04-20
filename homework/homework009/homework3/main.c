#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, dig;
    int newValue = 0;
    int oldValue;
    printf("Input number: ");
    scanf("%d", &number);
    oldValue = number;
    do
    {
        dig = number % 10;
        newValue = newValue * 10 + dig;
        number /= 10;
    }
    while(number > 0);
    if(newValue == oldValue)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}
