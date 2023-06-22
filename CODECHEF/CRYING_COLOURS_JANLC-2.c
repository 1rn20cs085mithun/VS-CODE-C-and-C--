#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,r1,r2,r3,g1,g2,g3,b1,b2,b3;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d%d%d",&r1,&g1,&b1);
        scanf("%d%d%d",&r2,&g2,&b2);
        scanf("%d%d%d",&r3,&g3,&b3);
        if(r2==0 && r3==0 && g3==0)
        {
            printf("0\n");
        }
        if(r2!=0)
        {
            if(r3!=0)
            {
                if(g3!=0)
                {
                    printf("4\n");
                }
                else
                   printf("3\n");
            }
            else
            {
                if(g3!=0)
                {
                    printf("3\n");
                }
                else
                   printf("2\n");
            }
        }
        else if(r2==0)
        {
            if(r3!=0)
            {
                if(g3!=0)
                {
                    printf("3\n");
                }
                else
                   printf("2\n");
            }
            else
            {
                if(g3!=0)
                {
                    printf("2\n");
                }
                // else
                //    printf("1\n");
            }
        }
    }
    return 0;
}