#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#define SIZE 1000

void outputArray(const int array[], int size);
void inputArray(int array[], int size);
int arraySearch(int number, const int array[], int size);
int minOfArray(const int array[], int sizeOfArray, int sizeOfPart);
int maxOfArray(const int array[], int sizeOfArray, int sizeOfPart);
int swap(int *array[], int n, int p);

#endif // ARRAY_H_INCLUDED
