#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[5][5],b[5][5],c[5][5];
    int i,j,k,m,n,p,q;
    printf("enter the size of 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("enetr the size of 2nd matrix\n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter the elements of 1st matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("enter the elements of 2nd matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\n",c[i][j]);
            }
        }
    }
    else
    printf("matrix multiplication is not possible\n");
    
    return 0;
}