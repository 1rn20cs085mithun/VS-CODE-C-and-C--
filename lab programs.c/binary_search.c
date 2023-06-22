#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int beg,end,mid,loc=0,item,n,i;
    int a[10];
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the soted array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("the sorted array is.....\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter the key element to search\n");
    scanf("%d",&item);
    beg=0;
    end = n-1;
    mid = (beg+end)/2;
    
    while(beg<=end&&a[mid]!=item)
    {
        if(item<a[mid])
           end=mid-1;
        else
           beg=mid+1;

        mid = (beg+end)/2;
    }
    if(a[mid]==item)
    {
        printf("element %d is found at %d\n",item,mid+1);
    }
    else
     printf("unsuccessfull search\n");
    return 0;
}