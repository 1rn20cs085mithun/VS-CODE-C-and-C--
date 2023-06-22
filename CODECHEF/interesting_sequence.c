#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,n=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        while(a/2<=n)
        {
            if(a==pow(2,n))
            {
                printf("%d\n",n);
            }
            n++;
        }
    }
    return 0;
}