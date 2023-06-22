#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct sparse
{
    int row,col,value;
};
typedef struct sparse S;

void accept(S s1[],int m,int n)
{
    int i,j,k=1,elem;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("the element of the row %d column %d is\n",i,j);
            scanf("%d",&elem);
            if(elem!=0)
            {
                s1[k].row=i;
                s1[k].col=j;
                s1[k].value=elem;
                k++;
            }
        }
    }
    s1[0].row=n;
    s1[0].col=m;
    s1[0].value=k-1;
}

void display(S s1[])
{
    int n=s1[0].row;
    int m=s1[0].col;
    int k=s1[0].value;
    int w=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==s1[w].row && j==s1[w].col)
            {
                printf("%d\t",s1[w].value);
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
    S s1[20];
    int n,m,ch;
    printf("enter the number of rows & col\n");
    scanf("%d%d",&n,&m);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.accept\n 2.display\n 3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : accept(s1,n,m);
                     break;
            case 2 : display(s1);
                    break;
            case 3 : exit(0);
        }
    }
    return 0;
}