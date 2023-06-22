#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[100],n;
    scanf("%d",&n);
    int c=0;
    int i=0;
    while(n--)
    {
        scanf("%d",&a[i]);
        i--;
    }
    for( i=0;i<n-2;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            c++;
        }
    }
    if(c%2==0)
    {
        printf("%d",(n/2));
    }
    else if(c==0)
    {
        printf("-1");
    }
    else
        printf("%d",c-1);

    return 0;
}