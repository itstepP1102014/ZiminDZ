#include <stdio.h>

int IndexOfLastNegative (int array[], int size){
	for(int i = size-1; i>=0; --i){
		if(array[i]<0){
		return i;
		}
	}
return -1;
}


int IndexOfFirstPositive (int array[], int size){
	for(int i = 0; i < size; ++i){
        if(array[i] > 0){
            return i;
        }
}
return -1;
}
