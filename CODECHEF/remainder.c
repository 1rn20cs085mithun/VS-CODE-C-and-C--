#include<stdio.h>
int main()
{
    long t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=a%b;
        printf("%d\n",c);
    }
    return 0;
}