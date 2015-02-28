void bubbleSort(int* array, int size)
{
    int tmp, i, j;

    for(i = 0; i < size - 1; ++i)
    {
        for(j = 0; j < size - 1; ++j)
        {
            if (array[j + 1] < array[j])
            {
                tmp = arr[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }
        }
    }
}


void selectSort(int* array, int size)
{
    int tmp, i, j, pos;
    for(i = 0; i < size; ++i)
    {
        pos = i;
        tmp = array[i];
        for(j = i + 1; j < size; ++j)
        {
            if (array[j] < tmp)
            {
               pos = j;
               tmp = array[j];
            }
        }
        array[pos] = array[i];
        array[i] = tmp;
    }
}



void insertSort(int* array, int size)
{
    int i, j, tmp;
    for (i = 1; i < size; ++i)
    {
        tmp = array[i];
        for (j = i - 1; j >= 0 && array[j] > tmp; --j)
            array[j + 1] = array[j];
        array[j + 1] = tmp;
    }
}


