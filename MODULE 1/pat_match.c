#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int p_m(char t[],char p[])
{
    int k,l;
    int r= strlen(p);
    int s= strlen(t);
    int max=s-r+1;
    for(k=0;k<max;k++)
    {
        for(l=0;l<r;l++)
        {
            if(p[l]!=t[k+l])
            {
                break;
            }
        }
        if(l==r)
        {
            return k;
        }
    }
    return -1;

}

int main()
{
    
    return 0;
}