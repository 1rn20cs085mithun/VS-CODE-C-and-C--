#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10

int F(char symbol)
{
	switch(symbol)
	{
		case '+' : 
		case '-' : return 2;
		case '*' : 
		case '/' : 
		case '%' : return 4;
		case '$' :
		case '^' : return 5;
		case '(' : return 0;
		case '#' : return -1;
		default  : return 8;
	}
}

int G(char symbol)
{
	switch(symbol)
	{
		case '+' : 
		case '-' : return 1;
		case '*' : 
		case '/' : 
		case '%' : return 3;
		case '$' :
		case '^' : return 6;
		case '(' : return 9;
		case ')' : return 0;
		default  : return 7;
	}
}

void push(char s[MAX],int *top,char symbol)
{
	if((*top)!=MAX-1)
	{
		(*top)++;
		s[*top]=symbol;
	}
	else
		printf("overflow\n");
}

char pop(char s[MAX], int *top)
{
	char elem;
	if((*top)!=-1)
	{
		elem=s[*top];
		(*top)--;
		return elem;
	}
	else
	  	printf("underflow\nno elements in stack\n");
}

void infix_to_postfix(char infix[MAX],char postfix[MAX])
{
	int top=-1,i,j=0,n;
	char s[MAX],symbol;
	n=strlen(infix);
	push(s,&top,'#');
	for(i=0;i<n;i++)
	{
		symbol=infix[i];
		while(F(s[top])>G(symbol))
		{
			postfix[j++]=pop(s,&top);
		}
		if(F(s[top])!=G(symbol))
		{
			push(s,&top,symbol);
		}
		else
			top--;
	}
	while(s[top]!='#')
	{
		postfix[j++]=pop(s,&top);
	}
	postfix[j]='\0';
	printf("postfix expression is %s",postfix);
}

int main()
{
	char infix[MAX],postfix[MAX];
	printf("enter the infix expression\n");
	scanf(" %s",infix);
	infix_to_postfix(infix,postfix);
	return 0;
}

