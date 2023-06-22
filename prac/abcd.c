#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t, a, b, c, l, s;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a > c)
        {
            if (a > b && c > b)
            {
                l = a;
                s = b;
            }
            else if (a < b && b > c)
            {
                l = b;
                s = c;
            }
        }
        else
        {
            if (b > c && b > a)
            {
                l = b;
                s = a;
            }
            else if (c > b && c > a)
            {
                l = c;
                s = a;
            }
        }
        printf("%d", (l - s));
    }
    return 0;
}