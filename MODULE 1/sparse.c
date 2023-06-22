#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct sparse
{
    int row,col,val;
};
typedef struct sparse S;

void accept(S s1[],int n,int m)
{
    int i,j,k=1,elem;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enetr the element for the row no %d and column no %d\n",i,j);
            scanf("%d",&elem);
            if(elem!=0)
            {
                s1[k].row=i;
                s1[k].col=j;
                s1[k].val=elem;
                k++;
            }
        }
    }
    s1[0].row=n;
    s1[0].col=m;
    s1[0].val=k-1;

}

void display(S s[])
{
    int m,n,k,w,i,j;
    n=s[0].row;
    m=s[0].col;
    k=s[0].val;
    w=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==s[w].row && j==s[w].col)
            {
                printf("%d\n",s[w].val);
                w++;
            }
            else
            printf("0\t");
        }
        printf("\n");
    }
}


int main()
{
    
    return 0;
}