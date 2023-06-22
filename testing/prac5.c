#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 4

void insert(int q[max],int *c, int *r,int elem)
{
    if((*c)!=max)
    {
         (*c)++;
        (*r)=(*r+1)%max;
        q[*r]=elem;
    }
    else 
    {
       printf("insertion is not possible\n");
        return;
    }
}

void delete(int q[max],int *c,int *f)
{
    if((*c)==0)
    {
        printf("deletion is not possible\n");
        return;
    }
    else
    {
        printf("the deleted element is %d",q[*f]);
        (*f)=(*f+1)%max;
        (*c)--;
    }
}

void display(int q[],int c,int f)
{
    while(c!=0)
    {
        printf("%d",q[f]);
        f=(f+1)%max;
        c--;
    }
}

int main()
{
    int r=(max-1),f=0,c=0,ch,elem,q[max];
    while(1)
    {
        printf("enter the choice\n");
        printf("1.insert\n 2.delete\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("enetr the element to be inserted\n");
                     scanf("%d",&elem);
                     insert(q,&c,&r,elem);
                     break;
            case 2 : delete(q,&c,&f);
                     break;
            case 3 : display(q,c,f);
                     break;
            case 4 : exit(0);
            default : printf("wrong choice\n");
                      exit(0);
        }
    }
    return 0;
}