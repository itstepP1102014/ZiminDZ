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
display(); /* ����� ������� ����� */
get_player_move(); /* ����� ����� */
done = check(); /* �������� �� ������ */
if (done!=SPACE) break; /* ���������� */
get_computer_move(); /* ����� ��������� */
done=check(); /* �������� �� ������ */
}
while(done==SPACE);
if(done=='X') printf("You won!\n");
else printf("I won!!!!\n");
display(); /* ����������� ��������������� ��������� */
return 0;

}
