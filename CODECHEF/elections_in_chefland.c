#include<stdio.h>

int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<=50 && b<=50 && c<=50)
        {
            printf("NOTA\n");
        }
        else
        {
            if(a>50)
            {
                printf("A\n");
            }
            else if(b>50)
            {
                printf("B\n");
            }
            else
            printf("C\n");
        }
    }
    return 0;
}