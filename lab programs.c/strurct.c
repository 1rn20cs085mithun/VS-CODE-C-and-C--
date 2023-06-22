#include <stdio.h>
#include<stdlib.h>
//#define SIZE 5
void cq_insert(char ch,int *r,char cq[],int *cnt,int SIZE);
char cq_delete(int *f,char cq[],int *cnt,int SIZE);
void cq_display(int f,int c,char cq[],int SIZE);
int main()
{
  int f=0,r=-1,ch,count=0,SIZE, item_del;
  printf("enter size of the queue\n");
  scanf("%d",&SIZE);
  char cq[SIZE],ch_ele,ele;
 
  for(;;)
   {
       printf("\nenter\n 1.To insert\n 2.to delete\n 3.To Display\n 4.exit\n");
       scanf("%d",&ch);
       switch(ch)
       {
            case 1:if(count==SIZE)
                    {
                     printf("queue is full\n\n");
                     break;
                    }
                    printf("enter the element to be inserted\n");
                    scanf(" %c",&ch_ele);
                    cq_insert(ch_ele,&r,cq,&count,SIZE);
                    break;
            case 2:if(count==0)
                   {
                       printf("queue is empty\n");
                       break;
                       
                   }
                   item_del=cq_delete(&f,cq,&count,SIZE);
                   break;
            case 3:if(count==0)
                    {
                        printf("queue is empty\n");
                        break;
                    }
                    cq_display(f,count,cq,SIZE);
                    break;
            case 4:exit(0);
            default:printf("invalid choice\n");
       }
       
   }
   
}  

void cq_insert(char ch,int *r,char cq[],int *cnt,int SIZE)
{
    *r=(*r+1)%SIZE;
    cq[*r]=ch;
    *cnt=*cnt+1;
    
    
}
char cq_delete(int *f,char cq[],int *cnt,int SIZE)
{
    char del_ele=cq[*f];
    *f=(*f+1)%SIZE;
    *cnt=*cnt-1;
    return del_ele;
}
void cq_display(int f,int c,char cq[],int SIZE)
{
    for(int i=1;i<=c;i++)
    {
     printf("%c",cq[f]);
     f=(f+1)%SIZE;
    } 
}