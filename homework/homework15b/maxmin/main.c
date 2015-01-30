#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../../modules/include/array.h"


int main()
{
    int array[SIZE], size;
    printf("Enter size of array(1-1000): ");
    scanf("%d", &size);
    if (0<=size && size<1000)
    {
        generateOreNotAnswer(array, size);
        outputArray(array, size);
        maxEvenOfArray(array, size);
        minOddElement(array, size);
        printf("Minimum among the odd elements: %d\n",  minOddElement(array, size));
        printf("The maximum among the even elements: %d\n", maxEvenOfArray(array, size));
        }
    return 0;
}
