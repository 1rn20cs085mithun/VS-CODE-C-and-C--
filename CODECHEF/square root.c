#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,sqr;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sqr= pow(n,0.5);
        printf("%d",sqr);
    }
    return 0;
}       
