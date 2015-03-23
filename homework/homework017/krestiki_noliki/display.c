char m[3][3] = /* поле для крестиков-ноликов */
{
{0, 0, 0},
{0, 0, 0},
{0, 0, 0}
} ;





//Отображение игровой ситуации на экран
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
