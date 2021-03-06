#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../modules/include/array.h"
#include "../../modules/include/negative_positive.h"

int main()
{
    int array[SIZE], size, n; char answer;
    printf("Enter size of array(1-1000): ");
    scanf("%d", &size);
    if (0<=size && size<1000){
        printf("Do you want to generate random numbers?(y/n):\n");
        scanf(" %c", &answer);
        if (answer == 'y'){
        int i;
        srand(time(NULL));
        for(i=0; i<=size; i++){
        array[i] = rand()%201-100;
        }
        }

        else{
        inputArray(array, size);} /*answer == no*/

        outputArray(array, size);

        n = IndexOfLastNegative(array, size);
        if(n == -1){
            printf("Recently, a negative number is not found!\n");
        }
        else{
            printf("The last negative number of array = %d, index: %d.\n", array[n], n);
        }
        n = IndexOfFirstPositive(array, size);
        if (n == -1){
            printf("The first positive number not found!\n");
        }
        else{
            printf("The first positive number of array = %d, index: %d\n", array[n], n);
        }
    }
    else{
        printf("ERROR!!!");
        exit(1);
    }
return 0;
}
