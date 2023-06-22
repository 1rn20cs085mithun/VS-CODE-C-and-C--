#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a;
    char b[10];
    char c[20];
    scanf("%c%s",&a,b);
    fgets(c,20,stdin);
    printf("%c\n%s\n%s",a,b,c);
    return 0;
}
