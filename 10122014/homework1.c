#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ASCII */
        for (int number = 0; number <68; number++)
	{
		if (number%16 != 0)
		{
			printf("%c ", number - 1);
		}
		else
		{
			printf("%c\n", number - 1);
		}
	}	
return 0;									}
}