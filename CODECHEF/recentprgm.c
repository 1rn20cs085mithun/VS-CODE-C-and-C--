#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,n,c=0,m=0;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            char s[10];
            for(int i=0;i<n;i++)
            {
                scanf("%s",s);
                char h[10] = "START38";
                if(strcmp(h,s))
                {
                    c++;
                }
                else
                    m++;
            }     
            printf("%d %d\n",m,c);
            c=0,m=0;
    }
    return 0;
}
//  for(int i=0;i<n;i++)
//         {
//             char h[10] = "START38";
//             if(strcmp(h,s[i]))
//             {
//                 m++;
//             }
//             else
//                 c++;
//         }