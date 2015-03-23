#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Anything_
{
    int x;
    struct Anuthyng_ *s;
} Anything;


typedef int Data;
typedef struct Node_
{
    Data data;
    struct Node_ *link;
    //(*next, *previous);
    //(*left, *right, *parent);
}Node;

void push(Node **top, Data data)
{
    Node *p=NULL;
    p=(Node *)malloc( sizeof(Node));

    p->data=data;
    p->link=*top;

    *top=p;
    p=NULL;
}

void pop(Node **top)
{
    if( *top)
    {
        Node *p = *top;

        *top = (*top)->link;
        //(**top).link;

        p->data=0;
        p->link=NULL;
        free(p);
        p=NULL;
    }
}

bool onTop(Node *top, Data *data)
{
    if(!top)
        return false;
    *data= top->data;
    return true;
}

bool isEmpty(Node *top)
{
    return top==NULL;
}

void clear( Node **top)
{
    while(*top)
        pop(top);
}

int main()
{
    push(&top, 27);
    pop(&pop);
    if (onTop(top, &x))
    return 0;
}
