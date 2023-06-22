#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long int n,m,p=0;
    int i,j,temp;
    scanf("%ld%ld",&n,&m);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    p=a[n-1]-a[n-2];
    printf("%ld\n",p);
    return 0;
}