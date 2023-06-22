#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,r=0,c=0;
    scanf("%d",&n) ;
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]%2==0)
        {
            r+=s[i];

        }
        else
          c+=s[i];
    }
    if((r%2==0 && c%2==0) || (r%2!=0 && c%2!=0) )
    {
        printf("1\n");
    }
    else
        printf("2\n");
    return 0;
}