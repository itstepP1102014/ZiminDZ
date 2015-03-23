#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '


int main()
{
char done;
printf("You will be playing against the computer.\n");
done = SPACE;
do
{
display(); /* вывод игровой доски */
get_player_move(); /* ходит игрок */
done = check(); /* проверка на победу */
if (done!=SPACE) break; /* победитель */
get_computer_move(); /* ходит компьютер */
done=check(); /* проверка на победу */
}
while(done==SPACE);
if(done=='X') printf("You won!\n");
else printf("I won!!!!\n");
display(); /* отображение результирующего положения */
return 0;

}
