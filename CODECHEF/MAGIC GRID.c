#include<stdio.h>
int main()
{
    int t,n,i,j,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",k);
            }
            printf("\n");
        }
    }
    return 0;
}