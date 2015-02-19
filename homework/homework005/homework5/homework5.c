#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../../modules/include/compatibility.h"

int main()
{
    char answer;
    do
    {
        universalClear();
        printf("Hello, I'm guessing a number from 1 to 100, and you have to guess it\n");
        srand(time(NULL));
        int comp_numb, user_numb, step = 0;
        comp_numb = rand()%99+1;
        while(user_numb != comp_numb)
        {
            printf("Enter a number from 1 to 99: \n");
            scanf("%d", &user_numb);
            if(user_numb > comp_numb)
            {
                printf("Your number is greater than.\n");
            }
            else if (user_numb < comp_numb)
            {
                printf("Your number is less than.\n");
            }
            ++step;
        }
        printf("Congratulations. You guessed it. It took you %d attempts\n", step);
        printf("Do you want to play again(y/n)?: \n");
        scanf(" %c", &answer);
    }
    while (answer == 'y');
    printf("Bye!");
    return 0;
}
