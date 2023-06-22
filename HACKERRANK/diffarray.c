#include<stdio.h>

int main()
{
    int x,n,i,j,temp;
    scanf(" %d",&x);
    scanf(" %d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n-1;i++)//number of passes
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            printf(" %d\n",(a[i]-x));
            break;
        }
    }

    return 0;
}