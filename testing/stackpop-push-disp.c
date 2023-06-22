#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 4

void pop ( int s[max],int *top)
{
    if (*top!=-1)
    {
        printf(" deleted %d",s[*top]);
        (*top)--;
    }
    else
    printf(" underflow \n");
}

void push (int s[max],int * top,int elem)
{
    if(*top<= max)
    {
        printf("insertsion possible\n");
        (*top)++;
        s[*top]= elem;
    }
    else
    printf("overflow\n");
}

void display (int s[max],int top)
{
    for(int i =0;i<=top;i++)
    {
        printf("elem are %d",s[i]);
    }
}
int main()
{
    int elem,s[max],top=-1;
    printf("enter the elem\n");
    scanf("%d",&elem);
     push(s,&top,elem);
   // pop(s,&top);
    display(s,top);
    return 0;
}