#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,fact=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact = fact *i;
        }
        printf("%d\n",fact);
    }
    
    return 0;
}


#include<stdio.h>
void solve()
{
    int i,j,num,m=0,carry=0;
int a[1000]={1};
scanf("%d",&num);
for(i=1;i<=num;i++)
{
	for(j=0;j<=m;j++)
	{
	  	a[j]=(a[j]*i+carry);
		  carry=a[j]/10;
	  	a[j]=a[j]%10;
		}
		  while(carry){
			 m++;
			 a[m]=carry%10;
			 carry/=10;
		}
	}
			for(int k=m;k>=0;k--)
			printf("%d",a[k]);
			printf("\n");
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }
    
}

