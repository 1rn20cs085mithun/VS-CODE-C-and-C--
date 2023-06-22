#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,sum,i,j,k;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the sum value\n");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            k=a[i]+a[j];
            if(k<sum)
            {
                continue;
            }
            else
            if()
        }
    }
    
    return 0;
}