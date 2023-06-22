#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int push(int s[],int *top,int *n,int elem)
{
    if((*top)<(*n)-1)
    {
        (*n)=(*n)*2;
        s=(int*)realloc(s,sizeof(int)*(*n));
        (*top)++;
        s[*top]=elem;
        return *s;
    }
    else
    printf("overflow\n");
    return *s;
}

int pop(int s[],int *top,int*n)
{
    if((*top)!=-1)
    {
        printf("the deleted elem is %d\n",s[*top]);
        (*top)--;
         (*n)--;
        s=(int*)realloc(s,sizeof(int)*(*n));
        return *s;
    }
    else
    printf("underflow\n");
    return *s;
}

void display(int s[],int top)
{
    int i;
    if(top==-1)
    {
        printf("no elements in stack\n");
    }
    for(i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
}

int main()
{
    int *s,n,top=-1,ch,elem;
    printf("enter the no. of elements in stack\n");
    scanf("%d",&n);
    s=(int*)malloc(sizeof(int)*n);
    while(1)
    {
        printf("enetr the choice\n");
        printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("enter the element to be inserted\n");
                     scanf("%d",&elem);
                     s = push(s,&top,&n,elem);
                     break;
            case 2 : s = pop(s,&top,&n);
                     break;
            case 3 : display(s,top);
                    break;
            case 4 : exit(0);
            default : printf("wrong choice\n");
                      break;
        }
    }
    free(s);
    return 0;
}