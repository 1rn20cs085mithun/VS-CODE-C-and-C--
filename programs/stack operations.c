#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 4

void push(int s[MAX],int*top,int ele);
void pop(int s[MAX],int *top);
void display(int s[MAX],int top);

int main()
{
    int s[MAX];
    printf("enter the stack elements\n");
    for(int i=0;i<MAX-1;i++)
    scanf("%d",&s[i]);
    int top = -1,ele;
    push(s,&top ,ele);
    pop(s,&top);
    display(s,top);
    
    return 0;
}

void push(int s[MAX],int*top,int ele)
{
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    if((*top)>=MAX-1)
    {
        printf("stack is full\n");
    }
    else
    {
        (*top)++;
        s[*top]=ele;
    }
}

void pop(int s[MAX],int *top)
{
    if((*top)!=-1)
    {
        int ele;
        printf("the popped element is %d : \n",s[*top]);
        (*top)--;
    }
    else
    printf("UNDERFLOW\n");
}

void display(int s[MAX],int top)
{
    int i;
    printf("displaying stack elements\n");
    for(i=0;i<=top;i++)
    {
        printf("%d",s[i]);
    }
}