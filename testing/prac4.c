#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 10

void push(int s[max],int *top,int elem)
{
    if((*top)<max-1)
    {
        (*top)++;
        s[*top]=elem;
    }
    else
    printf("overflow\n");
}

void pop(int s[max],int*top)
{
    if((*top)!=-1)
    {
        printf("the popped element is %d\n",s[*top]);
        (*top)--;
    }
    else
    printf("underflow\n");
}

void display(int s[max],int top)
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
}
int main()
{
    int s[max],top=-1,elem,ch;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("enter the element to be pushed\n");
                     scanf("%d",&elem);
                     push(s,&top,elem);
                     break;
            case 2 : pop(s,&top);
                     break;
            case 3 : display(s,top);
                     break;
            case 4 : exit(0);
            default : printf("wrong choice\n");
                        exit(0);
        }
    }
    return 0;
}