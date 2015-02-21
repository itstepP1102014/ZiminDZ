#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()
{
    int x,i=2;
    printf("Enter the natural number (x >=2): \n");
    scanf("%d",&x);
    universalClear();
    printf("%d = ",x);
    while(i<=x)
    {
        if(x%i==0)
        {
            printf("%d",i);
            x=x/i;
            if(x>1)
                printf("*");
        }
        else
            ++i;
    }
    return 0;
}

