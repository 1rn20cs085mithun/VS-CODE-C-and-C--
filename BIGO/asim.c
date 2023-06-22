#include<stdio.h>

int main()
{
   long  int a,b,c=0;
    scanf("%d",&a);
    int i;
    while(a--)
    {
        scanf("%d",&b);
        for(i=b;i>0;i--)
        {
            if((i%2)!= 0)
            {
                c++;
            }
        }
         printf("%d\n",c);
       c=0;
    }
    return 0;
}