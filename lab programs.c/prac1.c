#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 10

void accept(int a[max],int n)
{
    int i;
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[max],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

int delete(int a[max], int n,int pos)
{
    int insert_p=pos,pos_t=n;
    if(pos>=0 && pos<n)
    {
        while(insert_p!=pos_t)
        {
            a[insert_p] = a[insert_p+1];
            insert_p++;
        }
        n--;
        return n;
    }
    else
    printf("deletion is not possible\n");
}

int insert(int a[max], int n,int elem,int pos)
{
    int insert_p=n,pos_t=pos;
    if(pos>=0 && pos<n)
    {
        while(insert_p!=pos_t)
        {
            a[insert_p] = a[insert_p-1];
            insert_p--;
        }
        a[pos] = elem;
        n++;
        return n;
    }
    else
    printf("insertion is not possible\n");
}
int main()
{
    int elem,pos,n,ch,a[max];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.accept\n 2.display\n 3.insert\n 4.delete\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : accept(a,n);
                      break;
            case 2 : display(a,n);
                     break;
            case 3 :  printf("enter the element and its position\n ");
                      scanf("%d%d",&elem,&pos);
                      n=insert(a,n,elem,pos);
                      break;
            case 4  :  printf("enter the position\n");
                       scanf("%d",&pos);
                       n=delete(a,n,pos);
                        break;
            case 5 : exit(0);
        }
    }
    return 0;
}