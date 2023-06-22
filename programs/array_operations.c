#include<stdio.h>
#include<stdlib.h>
#define max 10

void accept(int a[],int n)
{
    printf("accept the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    printf("display the array\n");
    for(int i =0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }   
}

int insert(int a[],int n , int elem,int pos)
{
   int  ini_strt=n,pos_term=pos;
    if(pos>=0 && pos<n)
    {
        while(ini_strt!=pos_term)
        {
            a[ini_strt]=a[ini_strt-1];
            ini_strt--;
        }
        a[pos]=elem;
        n++;
        return n;
    }
    else
    printf("insertion is not possible\n");
    return n;
}

int delete (int a[],int n, int pos)
{
    int ini_strt=pos,posi_term=n;
    if(pos>=0 && pos<n)
    {
        while(ini_strt!=posi_term)
        {
            a[ini_strt]=a[ini_strt+1];
            ini_strt++;
        }
        n--;
        return n;
    }
     else
    printf("insertion is not possible\n");
    return n;
}
int main()
{
    int a[max],n,ch,i,elem,pos;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.accept\n 2.display \n 3.insert\n 4.delete\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : accept(a,n);
                     break;
            case 2 : display(a,n);
                     break;
            case 3 : printf("enter the element and position to be inserted \n");
                     scanf("%d%d",&elem,&pos);
                      n=insert(a,n,elem,pos);
                    break;
            case 4 : printf("enter the position\n");
                     scanf("%d",&pos);
                     n=delete(a,n,pos);
                     break;
            case 5 : exit(0);
        }
    }
    return 0;
}