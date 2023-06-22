#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 4

void insert(int q[max],int *r)
{
    int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
    if(*r<=max-1)
    {
        // insertion possible
        (*r)++;
        q[*r]=ele;
    }
    else
    printf("insertion is not possible\n ");
}
void delete(int q[max],int*f,int r)
{
    if(*f>r)
    {
        printf("deletion is not possible\n");
        return;
    }
    else
    {
        printf("the deleted element from queue is %d\n",q[*f]);
        (*f)++;
    }
}
void display(int q[max],int f,int r)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}

int main()
{
    int q[max],f=0,r=-1,ch;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.insert\n 2. delete\n 3.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : // insertion
                    insert(q,&r);
                    break;
            case 2 : // deletion
                    delete(q,&f,r);
                    break;
            case 3 : // display
                     display(q,f,r);
                     break;
            default : exit(0);
                             
        }
    }  
    return 0;
}