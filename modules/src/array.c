#include <stdio.h>
#define SIZE 1000

void outputArray(const int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void inputArray(int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int arraySearch(int number, const int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == number)
        {
            return i;
        }
    }
    return -1;
}

int minOfArray(const int array[], int size)
{
    if(size > 0 && size <= SIZE)
    {
        int min = array[0];
        for(int i = 1; i < size; ++i)
        {
            min = array[i] < min? array[i] : min;
        }
        return min;
    }
    else
    {
        printf("ERROR!\a");
        exit(1);
    }
}

int maxOfArray(const int array[], int size)
{
    if(size > 0 && size <= SIZE)
    {
        int max = array[0];
        for(int i = 1; i < size; ++i)
        {
            max = array[i] > max? array[i] : max;
        }
        return max;
    }
    else
    {
        printf("ERROR!\a");
        exit(1);
    }
}

int swap(int *array[], int n, int p)
{
    int temp;
    temp = array[n];
    array[n] = array[p];
    array[p] = temp;
}


int maxEvenOfArray(const int array[], int size)
{
    int max = array[0];
    for(int i = 1; i <= size; ++i)
    {
        if(array[i] % 2 == 0)
        {
            max = array[i] > max? array[i] : max;
        }
    }
    return max;
}


int minOddElement(const int array[], int size)
{
    int min = array[0];
    for(int i = 1; i <= size; ++i)
    {
        if(array[i] % 2 != 0)
        {
            min = array[i] < min? array[i] : min;
        }
    }
    return min;
}


void generateOreNotAnswer(int array[], int size)
{
    char answer;
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
    }
}
