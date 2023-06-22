#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct poly
{
    int cf,ex;
};
typedef struct poly P;

void accept(P p1[],int n)
{
    printf("enter the cf & ex\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&p1[i].cf,&p1[i].ex);
    }
}

void display(P p1[],int n)
{
    printf("the cf & ex\n");
    for(int i=0;i<n;i++)
    {
        if(p1[i].cf > 0)
        {
            printf("+%dX^%d",p1[i].cf,p1[i].ex);
        }
        else
         printf("%dX^%d",p1[i].cf,p1[i].ex);
    }
    printf("\n");
}

int add(P p1[20],int n1,P p2[20],int n2,P res[20])
{
    int i,j,k=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(p1[i].ex==p2[j].ex)
            {
                res[k].cf=p1[i].cf+p2[j].cf;
                res[k].ex=p1[i].ex;
                k++;
                p2[j].cf= -999;
                break;
            }
            if(j==n2)
            {
                res[k].cf=p1[i].cf;
                res[k].ex=p1[i].ex;
                k++;
            }
        }
        for(j=0;j<n2;j++)
        {
            if(p2[j].cf!=-999)
            {
                res[k].cf=p2[j].cf;
                res[k].ex=p2[j].ex;
                k++;
            }
        }
    }
    // printf("the resultant poly is in function\n");
    // display(res,k);
    return k;
}


int main()
{
    P p1[20],p2[20],res[20];
    int n1,n2,k;
    printf("enter the number of terms in 1st & 2nd polymomial\n");
    scanf("%d%d",&n1,&n2);
    printf("1st poly is\n");
    accept(p1,n1);
    display(p1,n1);
    printf("2nd poly is\n");
    accept(p2,n2);
    display(p2,n2);
    printf("res poly is \n");
    k=add(p1,n1,p2,n2,res);
    display(res,k) ;
    return 0;
}