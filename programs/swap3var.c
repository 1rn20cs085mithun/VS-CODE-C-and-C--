//swapping two numbers using temp variable 
#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("enter the values of a and b\n");
    scanf(" %d%d",&a,&b);
    // swapping 2 numbers using temp variable
    temp = a;
    a = b;
    b = temp;
    printf(" the value of a and b after swapping is %d and %d ", a,b);
    return 0;

}