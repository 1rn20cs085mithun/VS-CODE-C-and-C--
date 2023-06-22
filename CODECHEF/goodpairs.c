#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,i,j,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(i=1;i<=n;i++)   
        {
            scanf("%d",&a[i]);
        }
        for(j=1;j<=n;j++)
        {
            scanf("%d",&b[j]);
        }
        for(j=1;j<=n;j++)
        {
            for(i=1;i<=n;i++)
            {
                if(i==j)
                    break;
                if(a[i]==b[j] && i<j)
                {
                    
                     c++;
                }
            }
        }
        printf("%d\n",c);  
    }
    return 0;
}