#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int humanScore = 0, computerScore = 0;
    //- first (start)
        do {
            humanScore = rand()%11+1 + rand()%11+1;
            computerScore = rand()%11+1 + rand()%11+1;
        } while (humanScore > 21 || computerScore > 21);
    //- second(game)
    printf("Your score is: \n%d\n", humanScore);
    char answer;
    if (humanScore > 11)
    {
        printf("Would you like take a one more card?"
            "(y/n):\n");
        scanf("%c", &answer);
    }
    if ('y'==answer)
    {
        humanScore += rand()%11+1;
    }

    int computerWillTake = 1;
    if (computerScore > 11)
    {
        computerWillTake = 21 - computerScore > rand()%21;
    }
    if(computerWillTake)
    {
        computerScore = rand()%11+1;
    }

        while (answer=='y'&& computerWillTake&&humanScore<21&&computerScore<21)
        {
            printf("Your score is: \n%d\n", humanScore);
    if (humanScore > 11)
    {
        printf("Would you like take a one more card?"
            "(y/n):\n");
        scanf("%c", &answer);
    }
    if ('y'==answer)
    {
        humanScore += rand()%11+1;
    }

    if (computerScore > 11)
    {
        computerWillTake = 21 - computerScore > rand()%21;
    }
    if(computerWillTake)
    {
        computerScore = rand()%11+1;

    }
    }
     while (answer=='y'&& humanScore < 21)
        {
            printf("Your score is: \n%d\n", humanScore);
    if (humanScore > 11)
    {
        printf("Would you like take a one more card?"
            "(y/n):\n");
        scanf("%c", &answer);
    }
    if ('y'==answer)
    {
        humanScore += rand()%11+1;
    }
        }
        while (computerWillTake && computerScore < 21)
        {
            if (computerScore > 11)
    {
        computerWillTake = 21 - computerScore > rand()%21;
    }
    if(computerWillTake)
    {
        computerScore = rand()%11+1;
        }
    }
    if (humanScore == 21)
    {
        printf("You are won!!!\n You score %d, humanScore");
    }
        else if ( humanScore > 21)
        {
            printf("You are lose!!!\n");
        }
        else if (computerScore <= 21 && humanScore < computerScore)
        {
            printf ("You are lose!!!\n");
        }
        else if (computerScore == humanScore)
        {
            printf("You are drow");
        }
        return 0;
    }
