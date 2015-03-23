/* ход компьютера */
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
