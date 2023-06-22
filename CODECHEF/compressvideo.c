#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],c=1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c++;
            }
        }
        if(c!=n)
        {
            printf("%d\n",c);
            c=0,n=0;
        }
        else 
            printf("%d\n",n);
            n=0,c=0;
    }
    return 0;
}