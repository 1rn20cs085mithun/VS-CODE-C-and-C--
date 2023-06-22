#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct emp
{
    char ename[30];
    int eid;
    int esal;
};
typedef struct emp E;

void accept(E e1[],int n)
{
    for(int i=0;i<n;i++)
    {
         printf("enter the emp name,eid,esal\n");
         scanf("%s%d%d",e1[i].ename,&(e1[i].eid),&(e1[i].esal));
    }
}

void  display(E e1[],int n)
{
    printf("the emp name,eid,esal\n");
    for(int i=0;i<n;i++)
    {
         printf("%s\n%d\n%d\n",e1[i].ename,(e1[i].eid),(e1[i].esal));
    }
}

void search(E e1[],int n)
{
    char item[10];
    int beg,end,mid;
    printf("enter the element to be searched\n");
    scanf(" %s",item);
    beg=0;
    end=n-1;
    mid = (beg + end)/2;
    while(beg <= end) 
    {
        if(strcmp( e1[mid].ename , item)== 0)
        {
            printf("search is successful at %d\n",mid+1);
            return;
        }
        else
        {
            if(strcmp( e1[mid].ename , item)==-1)
            {
                beg=mid+1;
            }
            else
                end = mid-1;
        }
        mid =(beg + end)/2;
    }
    printf("unsuccessfull search\n");

}

void sort(E e1[],int n)
{
    int i,j,temp1,temp2;
    char temp[20];
    printf("the original data is\n");
    for(int i=0;i<n;i++)
    {
         printf("%s\n%d\n%d\n",e1[i].ename,(e1[i].eid),(e1[i].esal));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((strcmp(e1[j].ename ,e1[j+1].ename)== 1))
            {
                strcpy(temp,e1[j+1].ename);
                strcpy(e1[j+1].ename , e1[j].ename);
                strcpy(e1[j].ename ,temp);
                temp1=e1[j+1].eid;
                e1[j+1].eid = e1[j].eid;
                e1[j].eid= temp1;
                temp2=e1[j+1].esal;
                e1[j+1].esal = e1[j].esal;
                e1[j].esal= temp2;
            }
        }
    }
    printf("the sorted data is \n");
    for(int i=0;i<n;i++)
    {
         printf("%s\n%d\n%d\n",e1[i].ename,(e1[i].eid),(e1[i].esal));
    }
}

int main()
{
    E e1[10];
    int ch,n;
    printf("enetr the no. of employees\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.accept\n 2.display\n 3.sort\n 4.search\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : accept(e1,n);
                     break;
            case 2 : display(e1,n);
                     break;
             case 3 : sort(e1,n);
                     break;
             case 4 : search(e1,n);
                      break;
            case 5 : exit(0);
            default : printf("wrong choice\n");
                        break;
        }
    }
    return 0;
}