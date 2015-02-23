#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/stack.h"


int main()
{
    char stack[s_size], bracket;
    bracket = getchar();
    if(bracket == '(' || bracket == '{' || bracket == '[')
    {
        push(stack, bracket);
    }
    else if(bracket == ']' || bracket == '}' || bracket == ')')
    {
        pop(stack, bracket);
    }
    void result_stack(stack);
return 1;
}
