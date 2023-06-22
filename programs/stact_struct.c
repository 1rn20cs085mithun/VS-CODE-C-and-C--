#include<stdio.h>
#include<stdlib.h>
#define max 4
typedef struct emp
{
    int eid;
    char en[20];
}E;
// typedef struct emp E;

// void push(E e1,int *t);
// void pop(E e1, int *t);
// void display(E e1, int t);

void push(E e1,int *t)
{
    printf("enter the employee id to be inserted\n");
    scanf("%d",&(e1).eid );
    if((*t)<max-1)
    {
        (*t)++;
        e1[*t] = e1.eid;
    }
    else 
    printf("OVERFLOW");
}
void pop(E e1,int *t)
{
    if(*t!=-1)
    {
        printf(" the popped emp id  is %d",e1.eid);
        (*t)--;
    }
    else 
    printf("UNDERFLOW");
}
void display(E e1, int t)
{
    int i;
    for(i=0;i<=t;i++)
    {
        printf("%d",e1[i].eid);
    }
}

int main()
{
    fflush(stdin);
    E e1[max];
    int top = -1;
    push(e1,&top);
    pop(e1,&top);
    display(e1,top);
    return 0;
}
