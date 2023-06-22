//swapping two numbers without using 3rd variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a & b\n");
    scanf("%d%d",&a,&b);
    // logic for swapping 2 numbers without using 3rd variable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the values of a and b after swapping is %d ansd %d",a,b);
    return 0;
}