#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,n,temp,avg;
    scanf("%d",&n);
    int a[n];


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
   avg=( a[n-2] +a[n-1])/2;
   printf("%d\n",avg);
    return 0;
}