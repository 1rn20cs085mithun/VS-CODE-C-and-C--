#include<stdio.h>

int main()
{
    int i,n,sc=0,m,k,l;
    scanf("%d",&n);
     int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        m=a[i];
        l=i+m;
        if(i==1)
        {
            sc=m;
        }
        else
        {
            if(l<=n)
            {  
                k=a[l];
                if(k+m>sc)
                {
                     sc=k+m;
                }   
            }
        }
    }
        printf("%d\n",sc);
    return 0;
}