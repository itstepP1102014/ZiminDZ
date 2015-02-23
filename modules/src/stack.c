#define s_size 100
static int top = -1;


void push(char *stack, char bracket)
{
    if(top >= s_size)
    {
        printf("Stack overflowed!!!\n");
        return;
    }
    {
        stack[++top] = bracket;
    }
}


void pop(char *stack, char bracket)
{
    if(top < 0)
    {
        printf("Stack is empty\n");
        return 0;
    }
    {
        bracket = stack[top];
        --top;
        return bracket;
    }
}

void result_stack(char *stack)
{
    if (top < 0)
    {
        printf("Correctly!!");
    }
    else
    {
        printf("Incorrectly");
    }

}
