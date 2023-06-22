#include<stdio.h>

int main()
{
    int n,sum=0,car=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=(i*(i+1))/2;
        car=sum+car;
        if(car>n)
        {
            printf("%d\n",i-1);
            break;
        }
        if(car==n)
        {
             printf("%d\n",i);
              break;
        }
    }
    return 0;
}