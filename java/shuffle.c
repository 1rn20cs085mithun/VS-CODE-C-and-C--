#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int bin(int a[],int temp)
{
    printf("checking....");
    for(int i=0;i<9;i++)
    {
        if(a[i]==temp)
            return 0;
    }
    return 1;
}

int main()
{
    int a[9];
    int temp;
    for(int i=0;i<9;i++)
        a[i]=0;
    printf("entering ran func....");
    for(int i=0;i<9;i++){
        while(1){
            temp=rand()%10;
            if(a[i]!=0 && bin(a,temp)){
                a[i]=temp;
                break;
            }
            else
                continue;
        }
    }
    int m=0;
    for(int i=0;i<9;i++)
    {
        if(m<3)
        {
             printf("%d",a[i]);
             m++;
        }
        if(m==3)
            m==0;
    }
    return 0;
}