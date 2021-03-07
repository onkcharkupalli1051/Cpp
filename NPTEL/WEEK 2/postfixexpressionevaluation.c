#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int data[100];
    int top;
}stack;

int empty(stack *p)
{
    return (p->top == -1);
}

int top(stack *p)
{
    return (p->data[p->top]);
}

void push(stack *p, char x)
{
    p->data[++(p->top)] = x;
}

void pop(stack *p)
{
    if(!empty(p))
    {
        p->top -= 1;
    }
}

int main()
{
    stack s;
    s.top = -1;

    //postfix expression
    char postfix[] = {'1','2','3','*','+','4','-'};

    int i,op1,op2;

    for(i=0;i<7;i++)
    {
        char ch = postfix[i];
        if(isdigit(ch))
            push(&s, ch-'0');
        else
        {
            op2 = top(&s); pop(&s);
            op1 = top(&s); pop(&s);

            switch(ch)
            {
                case '+':push(&s, op1+op2);break;
                case '-':push(&s, op1-op2);break;
                case '*':push(&s, op1*op2);break;
                case '/':push(&s, op1/op2);break;
            }
        }
    }
    printf("\nEvaluation : %d",top(&s));
    return 0;
}
