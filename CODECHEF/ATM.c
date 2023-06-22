#include<stdio.h>
int main()
{
    int x;
    float y,z;
    scanf("%d%f",&x,&y);
    if(x+0.5>y)
    {
        printf("%.2f",y);
    }
    else if(x%5==0)
    {
    z=y-x;
    z=z-0.5;
    printf("%.2f",z);
    }
    // else
    // {
    //   printf("%.2f",y);  
    // }
    return 0;
}