#include<stdio.h>
int main()
{
    long a,b,rem,fd,n,c=0;//fd=1st digit,rem=last digit i.e, remainder
    scanf("%ld",&a);
    while(a--)
    {
        scanf("%ld",&b);
        n=b;
       // printf("%ld",b);
         while((n/10)>0)
         {
             n=n/10;
             c++;
         }
             rem = b%10;
             fd = b/c;
             printf("%ld",rem+fd);
     }
    return 0;
}


#include <stdio.h>

int main(void) {
	// your code goes here
	int test,num,last,first;
	scanf("%d",&test);
	while(test--)
	{
	    scanf("%d",&num);
	    last = num % 10;
	    while(num>=10)
	    {
	      num=num/10;
	    }
	    first=num;
	    printf("%d\n",first+last);
	}
	return 0;
}

