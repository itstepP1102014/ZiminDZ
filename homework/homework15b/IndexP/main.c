#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
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
        printf("Enter the number(in the range of -100 to 100, except 0): ");
        scanf("%d", &p);
        if(-100<=p&& p<=100 && p != 0)
        {
            n = IndexOfLastPositiveEven (array, size, p);
            printf("%d\n", n);
            if(n == -1)
            {
                printf("An element not found");
            }
            else
            {
                array[n] = n;
                array[size-1] = n;
                printf("Reversed array: ");
                outputArray(array, size);
            }
        }
    }
    else
    {
        printf("ERROR!!!");
        exit(1);
    }
    return 0;
}
