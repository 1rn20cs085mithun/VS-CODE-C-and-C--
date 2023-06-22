#include<stdio.h>
#include<string.h>

int pattern_match(char ps[],char t[],int t_pos)
{
    int i;
    for(i=0;i<strlen(ps);i++,t_pos++)
    {
        if(ps[i]!=t[t_pos])
        {
            return -1;
        }
    }
    printf("in pm %s and t %s",ps,t);
    return 0;
}

int copy_matching_string(char ostr[20],char rs[20],int ostr_pos)
{
    int i;
    for(i=0;i<strlen(rs);i++)
    {
        ostr[ostr_pos]=rs[i];
        ostr_pos++;
    }
    printf("in cpy %s",ostr);
    return ostr_pos;
}

void accept(char s[30])
{
    //printf("enter the string\n");
    scanf(" %[^\n]s",s);
}

int main()
{
    char ps[20],rs[20],ostr[20],t[20];
    int t_pos=0,ostr_pos=0,flag;
    printf("enter the original stirng\n");
    accept(t);
    printf("enter the pattern stirng\n");
    accept(ps);
    printf("enter the replace string\n");
    accept(rs);
    while (t_pos<strlen(t))
    {
        flag = pattern_match(ps,t,t_pos);
        if(flag==0)
        {
            ostr_pos= copy_matching_string(ostr,rs,ostr_pos);
            t_pos=t_pos+strlen(ps);
        }
        else
        {
            ostr[ostr_pos]=t[t_pos];
            ostr_pos++;
            t_pos++;
        }
    }
    ostr[ostr_pos]='\0';
    printf("the resultant string is %s\n",ostr);
    return 0;
}