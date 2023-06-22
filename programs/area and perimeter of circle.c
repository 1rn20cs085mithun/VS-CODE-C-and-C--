//area and perimeter of circle
#include<stdio.h>
#define pi 3.14
int main ()
{
    double r,p,a;
    printf(" enter the value of radius of circle \n");
    scanf("%lf",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("area = %lf\n perimeter = %lf\n",a,p);
    return 0;
}