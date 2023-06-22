#include<stdio.h>
int main()
{
    int t,sum=0;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        while(n)
        {
            sum+=(n%10);
            n/=10;
        }
        printf("%d\n",sum);
        sum=0;
   }
    return 0;

}