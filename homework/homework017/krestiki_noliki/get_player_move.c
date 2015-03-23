//Человек ходит Х
//Человек ходит первый
//Функция отвечает за первый и последующие хода человека
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
