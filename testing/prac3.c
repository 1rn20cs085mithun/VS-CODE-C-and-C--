#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

float arith_op(float op1,char symbol,float op2)
{
    switch(symbol)
    {
        case '+' : return (op1+op2);
        case '-' : return (op1-op2);
        case '/' : return (op1/op2);
        case '*' : return (op1*op2);
        case '%' : return((int)op1%(int)op2);
        case '^' : 
        case '$' : return(pow(op1,op2));
        //default  : printf("wrong choice\n");
    }
}

void push(float s[],int *top,char symbol)
{
    (*top)++;
    s[*top]= symbol;
}

float pop(float s[],int *top)
{
    float elem;
    if((*top)!=-1)
    {
        elem=s[*top];
        (*top)--;
        return elem;
    }
    // else
    //     printf("deletion is not possible\n");
}
int main()
{
    float op1,op2,r,s[20];
    int top=-1,i=0;
    char symbol, postfix[20];
    printf("enter the postfix expresion\n");
    scanf(" %s",postfix);
    while(postfix[i]!='\0')
    {
        symbol = postfix[i];
        if(isdigit(symbol)!=0)
        {
            push(s,&top,symbol-'0');
        }
        else
        {
            op2 =pop(s,&top);
            op1=pop(s,&top);
            r=arith_op(op1,symbol,op2);
            push(s,&top,r);
        }
        i++;
    }
    printf("the evaluated expression is %f",pop(s,&top));
    return 0;
}

