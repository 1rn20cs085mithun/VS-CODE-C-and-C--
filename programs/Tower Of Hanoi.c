#include<stdio.h>

void toh(int n, char s,char t,char d)
{
    if(n==0)
    return;
    toh(n-1,s,d,t);
    printf("Move disc %d from %c to %c\n",n,s,d);
    toh(n-1,t,s,d);
}

int main()
{
    int n;
    char s,t,d;
    printf("enter the number of discs\n");
    scanf("%d",&n);
    printf("enter the tower names\n");
    scanf(" %c %c %c",&s,&t,&d);
    toh(n,s,t,d);
    return 0;
}
