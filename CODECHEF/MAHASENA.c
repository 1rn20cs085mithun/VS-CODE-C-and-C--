#include<stdio.h>
int main()
{
    int N,i,lucky=0,unlucky =0;
    // printf("enter the number of soldiers\n");
    scanf("%d",&N);
    int a[10000];
    // printf(" soldiers holding number of weapons in order\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
            lucky++;
        else 
            unlucky++;
    }
    if(lucky>unlucky)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
}