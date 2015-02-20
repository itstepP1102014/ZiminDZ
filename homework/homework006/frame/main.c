#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()
{
    int w, h;
    printf("Enter a number (w >=1): ");
    scanf("%d", &w);
    printf("Enter a number (h >=1): ");
    scanf("%d", &h);
    universalClear();
    for(int i = 1; i <= h; ++i)
    {
        for(int j = 1; j <= w; ++j)
        {
            if(i == 1 || j == 1 || i == h || j == w)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
