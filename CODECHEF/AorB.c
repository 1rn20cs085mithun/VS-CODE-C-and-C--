#include<stdio.h>

int main()
{
    int t,a,b,s=0,d,e;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        s=a+b;
        d=((500-(a*2)) +(1000-(s*4)));
        e=((500-(s*2))+(1000-(b*4)));
        if(d>e)
        {
            printf("%d\n",d);
        }
        else if(e>d)
        {
            printf("%d\n",e);
        }
        else
            printf("%d\n",d);
    }
    return 0;
}