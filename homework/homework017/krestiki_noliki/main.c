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


char m[3][3] = /* ���� ��� ���������-������� */
{
{0, 0, 0},
{0, 0, 0},
{0, 0, 0}
} ;





//����������� ������� �������� �� �����
void display()
{
for(int i=0; i < 5; i++)
{
for(int j=0; j<5; j++)
{
if(j % 2 == 0 && i % 2 == 0)
{
displayX0(m[i/2][j/2]);
}
else if (i % 2 == 0)
{
printf("|");
}
else
{
printf("-");
}
}
printf("\n");
}
}


//������� ����� �
//������� ����� ������
//������� �������� �� ������ � ����������� ���� ��������
void get_player_move()
{
int x, y;
printf("Enter coordinates for your X.\n");
printf("Row? ");
scanf ("%d", &x);
printf("Column? ");
scanf("%d", &y);
x--;
y--;
if (x<0 || y<0 || x>2 || y>2 || m[x] [y] !=SPACE)
{
printf("Invalid move, try again.\n");
get_player_move();
}
else m[x][y]='X';
}


/* ��� ���������� */
void get_computer_move()
{
register int t;
char *p;
p = (char *) m;
for (t=0; *p!=SPACE && t<9; ++t) p++;
if(t==9)
{
printf("draw\n");
exit(0); /* game over */
}
else *p = 'O';
}


/* �������� �� ������ */
char check()
{
int t;
char *p;
for(t=0; t<3; t++) /* �������� ����� */
{
p = &m[t] [0];
if (*p==* (p+1) && * (p+1)==*(p+2)) return *p;
}
for(t=0; t<3; t++) /* �������� �������� */
{
p = &m[0][t];
if(*p==*(p+3) && *(p+3)==*(p+6)) return *p;
}

/* �������� ���������� */
if(m[0] [0]==m[1] [1] && m[1] [1]==m[2] [2] )
return m[0][0];
if(m[0][2]==m[1][1] && m[1][1]==m[2] [0])
return m[0][2];
return SPACE;
}


void displayX0(int i)
{
if (i == 0)
printf(" ");
else if (i == 1)
printf("X");
else
printf("0");
}
