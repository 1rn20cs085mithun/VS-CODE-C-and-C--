#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,t,n,x,y,bit,a[10]={0,1,2,3,4,5,6,7,8,9};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&bit);
        switch(n)
        {
            case 1 : printf("%d\n",bit);
                    break;
            case 2 :for(i=0;i<10;i++)
                     {
                        bit=(x^y);
                        printf("%d\t%d\n",x,y);
                     }
                     
            
        }
        
    }
    return 0;
}