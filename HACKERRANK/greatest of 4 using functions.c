#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int max(int a, int b, int c, int d)
{
    if(a>=b && a>=c && a>=d)
    {
        return a;
    }
    else if(b>=a && b>=c && b>=d)
    {
        return b;
    }
    else if(c>=a && c>=b && c>=d)
    {
        return c;
    }
    else
     return d;

    
}

int main()
{
    int a,b,c,d,sum;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=max(a,b,c,d);
    printf("%d",sum);
    return 0;
}