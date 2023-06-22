#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void toh(int n,char s,char t,char d)
{
    if(n==0)
    {
        return ;
    }
    toh(n-1,s,d,t);
    printf("move disc %d from %c to %c\n",n,s,d);
    toh(n-1,t,s,d);
}

int main()
{
    int n;
    char s='A',t='B',d='C';
    printf("enter the number of discs\n");
    scanf("%d",&n);
    toh(n,s,t,d);
    return 0;
}