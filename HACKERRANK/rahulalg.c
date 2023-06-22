#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long z = 0;
    int a,b,n,c;

            for (int a = 1; a <= n; a++)
                for (int b = a; b <= n; b++)
                    for (int c = a; c <= b; c++)
                        z++;
           // cout << z << "\n";
   
    return 0;
}