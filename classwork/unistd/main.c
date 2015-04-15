#include <unistd.h>
//Системный вызов ΗΕΛΛΟ ΣΟΡΛΔ
int main(int argc, char **argv)
{
    write(1, "HELLO WORLD!\n", 13);
    return 0;
}
