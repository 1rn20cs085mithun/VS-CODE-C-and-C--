#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long t,p,d,m,rem;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&p,&d);
       if(p>d)
       {
            if(d<=10)
            {
                m=pow(2,d);
                if(m<p)
                {
                    printf("%lld\n",m);
                    break;
                }
                else
                printf("%lld\n",p);
                break;
            }
            else
            {
                rem=(d-10);
                m=1024*(pow(3,rem));
                if(m<p)
                {
                    printf("%lld\n",m);
                    break;
                }
                else
                printf("%lld\n",p);
                break;
            }
        }
        else if(p<=d)
        {
           printf("%lld",p);
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, days;
        int sum = 1;
        scanf("%d%d", &n, &days);
        for (int i = 1; i <= days; i++)
        {
            if (i <= 10)
            {
                sum *= 2;
                if (sum > n)
                {
                    sum = n;
                    break;
                }
            }
            else
            {
                sum *= 3;
                if (sum > n)
                {
                    sum = n;
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}