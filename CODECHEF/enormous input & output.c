#include<stdio.h>
int main()
{
    long long a[10000000];
    int n,k,i,count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
            count++;
        else
            continue;
    }
    printf("%d",count);
    return 0;
}