#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
# define max 4

void push(int s[max],int*t,int ele)
{
    if((*t)<max-1)
    {
        (*t)++;
        s[*t]=ele;
    }
    else
    printf("the stack is full\n");
}

void pop (int s[max],int*t)
{
    if((*t)!=-1)
    {
        printf(" the popped element is %d\n",s[*t]);
        (*t)--;
    }
    else 
    printf("the stack is empty\n");
}

void display(int s[max],int t)
{
    for(int i =0;i<=t;i++)
    {
        printf("%d",s[i]);
    }
}

int main()
{
    int s[max],top=-1,ele,ch;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.push\n 2.pop\n 3.delete\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : // push
                     printf("enter the value of element\n");
                     scanf("%d",&ele);
                     push(s,&top,ele);
                     break;
            case 2 : // pop
                     pop(s,&top);
                     break;
            case 3 : // display
                     display(s,top);
                     break;
            default : exit(0);
        }

    }
    
    return 0;
}