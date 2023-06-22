#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,d,i,j,temp,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&d);
        int a[100],m=0,e,f=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp =a[j];
                    a[j]= a[j+1];
                    a[j+1]= temp;
                }
            }
        }
        for(i=n-1;i>=0;i--)
        {
            e=a[i];
            if(f<d)
            {
                f=f+e;
                m++;
            }
        }
          if(f>=d)
          {
                  printf("%d\n",m);
          }
            else
            printf("-1\n");
    }
    return 0;
}