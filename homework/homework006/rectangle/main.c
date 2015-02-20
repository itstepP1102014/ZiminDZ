#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()
{
    int w, h;
    printf("Enter a number w: ");
    scanf("%d", &w);
    printf("Enter a number h: ");
    scanf("%d", &h);
    universalClear();
    for(int i = 1; i <= h; ++i)
    {
        for(int j = 1; j <= w; ++j)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
