#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,item,loc;
    printf("enetr the array size\n");
    scanf("%d",&n);
    int data[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("enter the item to be searched\n");
    scanf("%d",&data[n]);
    loc=0;
    item=data[n];
    while(data[loc]!=item)
    {
        loc=loc+1;
    }
    if(loc==n)
    {
        printf("unsuccessful search\n");
    }
    else
    printf("succussful search at %d",loc+19);
    
    return 0;
}