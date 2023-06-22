#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char str[100],pat[100],rep[100],ans[100];

void read()
{
    printf("enter the string\n");
    scanf("%s",str);
    printf("enter the pattern string\n");
    scanf("%s",pat);
    printf("enter the replace string\n");
    scanf("%s",rep);
}

void pat_mat()
{
    int i,j,c,m,k;
    int flag=0;
    i=j=c=m=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                printf("\n pat %s is found at pos %d",pat,c);
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j]=rep[k];
                }
                i=0;
                c=m;
                flag=1;
            }
        }
        else
        {
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
    if(flag==0)
    {
        printf("\n PAT %s is not foundin str %s",pat,str);
    }
    else
    printf("the resulting string is %s",ans);

}

int main()
{
    read();
    pat_mat();
    return 0;
}