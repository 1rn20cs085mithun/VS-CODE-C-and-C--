#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void update(int*a,int*b)
{
    *a=(*a)+(*b);
    *b=(*a)-(*b);
    printf("%u%u",a,b);
    return ;
}

int main()
{
   unsigned int *a,*b;
    int soln;
    scanf("%u",a);
    scanf("%u",b);
    update(&a,&b);
    return 0;
}