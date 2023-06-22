#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define HZ 3

struct employee
{
    int empno;
    char ename[30];
    int esal;
};
typedef struct employee EMP;

struct hashtable
{
    int key;
    long int addr;
};
typedef struct hashtable ht;

int hashval(int empno)
{
    return empno%HZ;
}

void insert(FILE *fp,ht *h,int n)
{
    int hindex,countindex,i;
    EMP a;
    for(i=0;i<n;i++)
    {
        printf("enter the employ details no name sal\n");
        scanf("%d%s%d",&(a.empno),(a.ename),&(a.esal));
        hindex=hashval(a.empno);
        countindex=hindex;
        while(h[hindex].key!=-1)
        {
            hindex=(hindex+1)%HZ;
            if(hindex==countindex)
            {
                printf("enetr is not possible\n");
                return;
            }
        }
        h[hindex].key=a.empno;
        fseek(fp,0,SEEK_END);
        h[hindex].addr=ftell(fp);
        fwrite(&a,sizeof(EMP),1,fp);
    }
}

void display(FILE *fp,ht *h,int n)
{
    int i;
    EMP a;
    for(i=0;i<n;i++)
    {
        if(h[i].key!=-1)
        {
            fseek(fp,h[i].addr,SEEK_SET);
            fread(&a,sizeof(EMP),1,fp);
            printf("%d%s%d",a.empno,a.ename,a.esal);
        }
    }
}

void search(FILE *fp,ht *h,int n)
{
    int hindex,countindex;
    EMP a;
    printf("enter the eno to be searched\n");
    scanf("%d",&(a.empno));
    hindex=hashval(a.empno);
    countindex=hindex;
     while(h[hindex].key!=a.empno)
     {
            hindex=(hindex+1)%HZ;
            if(hindex==countindex)
            {
                printf("unsuccessfull\n");
                return;
            }
    }
    fseek(fp,h[hindex].addr,SEEK_SET);
    fread(&a,sizeof(EMP),1,fp);
    printf("%d%s%d",a.empno,a.ename,a.esal);
}



int main()
{
    
    return 0;
}