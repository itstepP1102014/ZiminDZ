#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../../modules/include/array.h"
#include "../../../modules/include/negative_positive.h"

int main()
{
    int array[SIZE], size, n, p;
    printf("Enter size of array(1-1000): ");
    scanf("%d", &size);
    if (0<=size && size<1000)
    {
        generateOreNotAnswer(array, size);
        outputArray(array, size);

        n = IndexOfLastNegative(array, size);
        if(n == -1)
        {
            printf("Recently, a negative number is not found!\n");
        }
        else
        {
            printf("The last negative number of array = %d, index: %d.\n", array[n], n);
        }
        p = IndexOfFirstPositive(array, size);
        if (p == -1)
        {
            printf("The first positive number not found!\n");
        }
        else
        {
            printf("The first positive number of array = %d, index: %d\n", array[p], p);
        }
        printf("Array after changes:\n");
        swap(array, n, p);
        outputArray(array, size);
    }
    else
    {
        printf("ERROR!!!");
        exit(1);
    }
    return 0;
}
