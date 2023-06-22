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

void insert(int*a,int n,int elem,int pos)
{
        for(int i=n;i>pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=elem;
}

void delete (int a[],int n, int pos)
{
        for(int i=pos;i<n;i++)
        {
            a[i]=a[i+1];
            i++;
        }
    
}
int main()
{
    int *a,n,ch,i,elem,pos;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.accept\n 2.display \n 3.insert\n 4.delete\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : a=(int*)malloc(sizeof(int)*n);
                     accept(a,n);
                     break;
            case 2 : display(a,n);
                     break;
            case 3 : printf("enter the element and position to be inserted \n");
                     scanf("%d%d",&elem,&pos);
                      if(pos>=0 && pos<=n)
                      {
                          n++;
                          a=(int*)realloc(a,sizeof(int)*n);
                          insert(a,n,elem,pos);
                      }
                      else
                        printf("insertion is not possible\n"); 

                    break;
            case 4 : printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos>=0 && pos<=n)
                     {
                         delete(a,n,pos);
                         n--;
                         a=(int*)realloc(a,sizeof(int)*n);
                     }
                     else
                      printf("deletion is not possible\n");
                     break;
            case 5 : exit(0);
        }
    }
    return 0;
}