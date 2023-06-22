#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int convert(int bin)
{
    if(bin==0) 
       return 0;
    else
        return ((bin%10)+ 2* convert(bin/10));
}

int isprime(int num)
{
    int i;
    if(num==0||num==1)
       return 0;
    for(i=2;i<=num/2;i++)
        if(num%i==0)  {return 0;}
    return 1;
}

int main()
{
    int t,bin,dec;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&bin);
        dec=convert(bin);
        if(isprime(dec))
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}

