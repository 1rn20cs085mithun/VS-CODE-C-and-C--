#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int t,n;
    char str[50], ch;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            gets(str);
                for(i=0; str[i]!='\0'; i++)
                {
                    ch=str[i];
                    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
                    || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
                    || str[i]=='O' || str[i]=='U')
                    {
                        str[i] = ch;
                    }
                }
            printf("%s\n",str);
    }
    return 0;
}