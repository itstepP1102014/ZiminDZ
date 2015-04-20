#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int findMax(int n, ...);

int main()
{
    printf("%d", findMax(3, 1,2,-1));
    return 0;
}


int findMax(int n, ...)
{
    int largest;
    va_list theList;
    va_start(theList, n);
    largest = va_arg(theList, int);
    for(int i=1; i<n; ++i)
    {
        int val = va_arg(theList, int);
        largest = (largest>val)?largest:val;
    }
    va_end(theList);
    return largest;
}
