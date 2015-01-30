#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../../modules/include/array.h"


int main()
{
    int array[SIZE], size;
    char answer;
    printf("Enter size of array(1-1000): ");
    scanf("%d", &size);
    if (0<=size && size<1000)
    {
        printf("Do you want to generate random numbers?(y/n):\n");
        scanf(" %c", &answer);
        if (answer == 'y')
        {
            int i;
            srand(time(NULL));
            for(i=0; i<=size; i++)
            {
                array[i] = rand()%201-100;
            }
        }

        else
        {
            inputArray(array, size);
        } /*answer == no*/

        outputArray(array, size);
        maxEvenOfArray(array, size);
        minOddElement(array, size);
        printf("Minimum among the odd elements: %d\n",  minOddElement(array, size));
        printf("The maximum among the even elements: %d\n", maxEvenOfArray(array, size));
        }
    return 0;
}
