// #include<stdio.h>
// int main()
// {
//     long t,n,rem=0;
//     int m=0;
//     scanf("%ld",&t);
//     while(t--)
//     {
//         scanf("%ld",&n);
//         while((n/10)>0)
//         {
//             rem = n%10;
//             n = n/10;
//             while(rem%4==0)
//             {
//                 m++;
//             }
//             // else
//             // continue;
//         }

//         if(n%4==0)
//         {
//             m++;
//         }
//         else 
//         m;


//         printf("%d\n",m);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int c=0,rem=0;
        while(n>0)
        {
            rem=n%10;
            if(rem==4)
            {
                c++;
            }
            n=n/10;
            // else
            // continue;
        }
        printf("%d\n",c);
    }

    return 0;
}


// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int a,count=0;
//         scanf("%d",&a);
//         while(a!=0)
//         {
//             int m= a%10;
//             if(m==4)
//             {
//                 count++;
//             }
//             a=a/10;
//         }
    
//     printf("%d\n",count);
//     }
//     return 0;
// }

