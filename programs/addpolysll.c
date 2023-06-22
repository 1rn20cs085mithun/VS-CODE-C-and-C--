#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct poly 
{
    int cf,px,py,pz;
    struct poly * link;
};
typedef struct poly* P;

P getnode()
{
    P x;
    x=(P)malloc(sizeof(struct poly));
    if (x== NULL)
    {
        printf("memory is not avilable\n");
        exit(0);
    }
    return x;
}


int main()
{
    
    return 0;
}