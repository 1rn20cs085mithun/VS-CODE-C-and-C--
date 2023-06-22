#include<stdio.h>
#include<math.h>

int main()
{
    int t,t1,t2,n1,n2;
    float a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&t1,&t2,&n1,&n2);
        a= pow(t1,2);
        b= pow(t2,2);
        c= pow(n1,3);
        d= pow(n2,3);
        if((a/c) ==(b/d))
        {
            printf("Yes\n");
        }
        else
        printf("No\n");
    }
    return 0;
}