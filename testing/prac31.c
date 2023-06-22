#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void toh(char s,char t , char d,int n)
{
    if(n==0)
    return;
    toh(s,d,t,n-1);
    printf("move disc %d from %c to %c\n",n,s,d);
    toh(t,s,d,n-1);
}
int main()
{
    int n;
    char s='a',t='b',d='c';
    printf("enter the number of discs\n");
    scanf("%d",&n);
    toh(s,t,d,n);
    return 0;
}