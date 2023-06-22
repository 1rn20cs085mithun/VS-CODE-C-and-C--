#include<stdio.h>

int main()
{
    int t,k,rem,p,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        rem=(52/k);
        p=rem*k;
        res=52-p;
        printf("%d\n",res);
    }
    return 0;
}