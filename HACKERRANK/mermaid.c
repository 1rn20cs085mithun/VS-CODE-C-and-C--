#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int m,k,n,i,j,temp;
    scanf("%d",&m);
    int a[m],f[m];
    for(i=1;i<m;i++)
    {
       // F(K)=|X[1]-(K+1)|+|X[2]-(K+2)|+.....+|X[N]-(K+N)|
       scanf("%d",&a[i]);
        f[i]=a[i]-(k+i);
        if(f[i]<0)
        {
            f[i]=f[i]*-1;
        }
    }
     for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(f[j]>f[j+1])
            {
                temp = f[j];
                f[j] = f[j+1];
                f[j+1] = temp;
            }
        }
    }
    printf("%d\n",f[0]);


    return 0;
}