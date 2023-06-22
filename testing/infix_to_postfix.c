#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int f(char symbol)
{
    switch(symbol)
    {
        case '+' :
        case '-' : return 2;
        case '/' : 
        case '*' : 
        case '%' : return 4;
        case '^' :
        case '$' : return 5;
        case '(' : return 0;
        case '#' : return -1;
        default  : return 8;
    }
}

int g(char symbol)
{
    switch(symbol)
    {
        
        case '+' : 
        case '-' : return 1;
        case '/' : 
        case '*' : 
        case '%' : return 3;
        case '^' :
        case '$' : return 6;
        case '(' : return 9;
        case ')' : return 0;
        default  : return 7;
    }
}

void push(char s[20],int*top,char symbol)
{
    (*top)++;
    s[*top]=symbol;
}

char pop(char s[20],int *top)
{
    char elem;
    // if(s[*top]==-1)
    // {
    //     printf("empty stack\n");
    // }
    // else
    //{
        elem = s[*top];
        (*top)--;
        return elem;
   // }
}

void infix_to_postfix(char infix[20],char postfix[20])
{
    char symbol,s[20];
    int top=-1,i,j=0,n;
    n=strlen(infix);
    push(s,&top,'#');
    for(i=0;i<n;i++)
    {
        symbol=infix[i];
        while(f(s[top])>g(symbol))
        {
            postfix[j++] = pop(s,&top);
        }
        if(f(s[top])!=g(symbol))
        {
            push(s,&top,symbol);
        }
        else
            (top)--;
    }
    while(s[top]!='#')
    {
        postfix[j++] = pop(s,&top);
    }
    postfix[j]='\0';
    printf("the postfix expression is %s",postfix);
}

int main()
{
    char infix[20],postfix[20];
    printf("enter the infix expression\n");
    scanf(" %s",infix);
    infix_to_postfix(infix,postfix);
    return 0;
}