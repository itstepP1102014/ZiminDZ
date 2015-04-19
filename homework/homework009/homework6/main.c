#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, result = 0;
    char operation;
    printf("Input first number: \n");
    scanf("%d", &number1);
    printf("Input operation: \n");
    scanf("%s", &operation);
    printf("Input second number: \n");
    scanf("%d", &number2);

    switch (operation)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    default:
        printf("incorrect operation!!");
        break;
    }
    printf("result = %d\n", result);

    return 0;
}
