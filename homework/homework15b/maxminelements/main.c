#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../../modules/include/array.h"

int main()

{
    int array[SIZE], size, minElement, maxElement;
    printf("Enter size of array(1-1000): ");
    scanf("%d", &size);
    if (0<=size && size<1000)
    {
        generateOreNotAnswer(array, size);
        outputArray(array, size);
        for(int i = 0; i < size; ++i)
        {
            if(array[i] % 2 == 0)
            {
                array[i] = maxOfArray(array, size);
            }
            if(array[i] % 2 != 0)
            {
                array[i] = minOfArray(array, size);
            }

        }
        printf("New array, with max-min elements: ");
        outputArray(array, size);
    }
    return 0;
}
