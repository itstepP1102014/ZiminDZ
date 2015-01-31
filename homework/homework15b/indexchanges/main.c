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
        for(int i = 0;i < size; ++i)
        {
            if(array[i] % 2 == 0 && array[i] > 0)
            {
                array[i] = i;

            }
        }
        outputArray(array, size);
        return 0;
    }
}
