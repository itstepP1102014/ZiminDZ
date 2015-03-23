#include <stdio.h>
#include <malloc.h>

 int sp = 0;
 int stack[1000];
 int pop(void) {
     if (sp > 0) {
          return stack[--sp];
     } else {
          fprintf(stderr, "Unable to perform POP for an empty stack.\n");
          return 0;
     }
 };
 void push(int a) {
     stack[sp++] = a;
 };
 int empty() {
     return (sp == 0);
 }

 int main() {
     int i;
     while (!feof(stdin)) {
         int c = getchar();
         int x;
         switch (c) {
             case '\n':
             case ' ' : break;
             case '=' : printf("Result = %d\n", pop()); break;
             case 27  : goto RESULT;
             case '+' : push(pop() + pop()); break;
             case '-' : push(-pop() + pop()); break;
             case '*' : push(pop() * pop()); break;
             default:
                 ungetc(c, stdin);
                 if (scanf("%d", &x) != 1) {
                     fprintf(stderr, "Can't read integer\n");
                     return -1;
                 } else {
                     push(x);
                 }
                 break;
          }
    }
 RESULT:
     i = 0;
     while ( !empty() ){
         printf("Stack[%d] = %d\n", i,  pop());
         i++;
     }
     return 0;
 }
