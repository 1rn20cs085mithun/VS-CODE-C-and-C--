#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long t,a1,a2,b1,b2,c1,c2,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a1,&a2);
        scanf("%lld%lld",&b1,&b2);
        scanf("%lld%lld",&c1,&c2);
        a=a1+a2;
        b=b1+b2;
        c=c1+c2;
        if((a>=b)&&(a>=c))
        {
            printf("%lld\n",a);
        }    
        else if((b>=a)&&(b>=c))
        {
             printf("%lld\n",b);
        }
        else
        printf("%lld\n",c);
    }
    return 0;
}



