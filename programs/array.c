//  #include<stdio.h>
// int main()
// {
//     int n,i,j,a[n];
//     printf("enter the size of array");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         if(i%2!=0)
//         {
//             printf("%d",a[i]);
//             break;
//         }
//        // else 
//         //ontinue;
//     }
//     return 0;
// }
// 
 #include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
            break;
        }
       // else 
        //continue;
    }
    return 0;
}