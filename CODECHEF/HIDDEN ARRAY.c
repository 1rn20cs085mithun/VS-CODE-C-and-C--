// #include<stdio.h>

// int main()
// {
//     long long t,n,a,b[10000];
//     scanf("%d",&t);
//     while(t--)
//     {
//         scanf("%lld%lld",&n,&a);
//         // if(n>100)
//         // {
//         //     printf("Impossible\n");
//         // }
//         // int e=0,o=0;
//         // for(int i=0;i<n;i++)
//         // {
//         //     if(b[i]%2==0)
//         //     e++;
//         //     else
//         //     o++;
//         // }
//         // if(o%2==0)
//         // {
//         //     printf("Even\n");
//         // }
//         // else
//         // {
//         //     printf("Odd\n");
//         // }

//     }    
//     return 0;
// }

#include<stdio.h>

int isprime(int num)
{
    int i;
    if(num==0||num==1)
       return 0;
    for(i=2;i<=num/2;i++)
        if(num%i==0)  {return 0;}
    return 1;
}

int main()
{
    long long t,n,a,b[10000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&a);
        if(n==1)
        {
            if(a%2==0)
                printf("Even\n");
            else
            printf("Odd\n");
        }
        else if(n>1000)
         printf("Impossible\n");
        else 
        {
            if(isprime(a))
            {
                if(n%2==0)
                {
                    printf("Even\n");
                }
                else
                    printf("Odd\n");
            }
            else
            {
                if(a%2!=isprime(a))
                {
                    printf("Odd\n");
                }
                else
                printf("Even\n");

            }

        }
    }
    return 0;
}
