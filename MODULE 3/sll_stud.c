#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node
{
    struct stud info;
    struct node * link;
};
typedef struct node * NODE;

struct stud
{
    char name[20];
    int usn,marks;
};
//typedef struct stud S;

NODE getnode()
{
    NODE x;
    x= (NODE)malloc(sizeof(struct node));
    if(x=NULL)
    {
        printf("memory is not available\n");
        exit(0);
    }
    return x;
}

NODE insert_front(NODE first)
{
    NODE temp;
    temp =getnode();
    
    temp->link=first;
    return temp;
}

NODE insert_rear(NODE first)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

NODE delete_front(NODE first )
{
    NODE next;
    if(first==NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    next=first->link;
    printf("%d",first->info);
    free(first);
    return next;
}

NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first==NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    if(first->link==NULL)
    {
        printf(" deleted item is :%d",first->info);
        free(first);
        return NULL;
    }
     cur=first,prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("%d",cur->info);
    prev->link =NULL;
    free(cur);
    return first;
}

void display(NODE first)
{
    NODE cur=first;
    if(first==NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    
}

int main()
{
    NODE first=NULL;
    return 0;
}