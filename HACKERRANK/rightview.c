#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(pow(c,2)==((pow(a,2)+pow(b,2))))
        {
            printf("Yes\n");
        }
        else
        printf("No\n");
    }
    return 0;
}