#include<stdio.h>

struct emp
{
    char ename[20];
    int eid;
    int esal;
};
typedef struct emp E;

int main()
{
    int n,i,item,beg,end,mid;
    E e[10];
    printf("enetr the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",e[i].ename,&e[i].eid,&e[i].esal);
    }
    printf("enter the item to be searched\n");
    scanf("%d",&item);
    
    for(i=0;i<n;i++)
    {
        beg=0;
        end=n-1;
        mid=((beg+end)/2); 
        while(beg<=end && e[mid].eid!=item)
        {
            if(item<e[mid].eid)
            {
                end=mid-1;
            }
            else
            beg=mid+1;

            mid=((beg+end)/2);
        }
    }

    if(e[mid].eid==item)
    {
        printf("the element is found at %d",mid+1);
    }
    else
    printf("element is not found\n");
    return 0;
}