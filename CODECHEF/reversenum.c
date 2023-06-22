#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int rev=0;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            rev=rev*10+rem;
        }
        printf("%d\n",rev);
    }

    return 0;
}