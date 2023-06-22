#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct emp
{
    char name[50];
    int eid;
    int esal;
};

struct node
{
    struct node* llink;
    struct emp info;
    struct node *rlink;
};
typedef struct node *NODE;

NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memory is not available\n");
        exit(0);
    }
    return x;
}

NODE insert_rear(NODE first)
{
    NODE temp,cur=first;
    temp=getnode();
    temp->llink=temp->rlink=NULL;
    printf("enter the employee details\n");
    scanf(" %s%d%d",((temp->info).name),&((temp->info).eid),&((temp->info).esal));
    if(first==NULL)
    {
        return temp;
    }
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    temp->llink=cur;
    cur->rlink=temp;
    return first;
}

NODE insert_f(NODE first)
{
    NODE temp;
    temp=getnode();
    temp->llink=temp->rlink=NULL;
    printf("enter the employee details\n");
    scanf(" %s%d%d",((temp->info).name),&((temp->info).eid),&((temp->info).esal));
    if(first==NULL)
    {
        return temp;
    }
    temp->rlink=first;
    first->llink=temp;
    return temp;
}

NODE delete_rear(NODE first)
{
    NODE cur=first,prev=NULL;
    if(first==NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    if(first->rlink==NULL)
    {
        printf("%s\n%d\n%d\n",((first->info).name),((first->info).eid),((first->info).esal));
        free(first);
        return NULL;
    }
    while(cur->rlink!=NULL)
    {
        prev=cur;
        cur=cur->rlink;
    }
     printf("%s\n%d\n%d\n",((cur->info).name),((cur->info).eid),((cur->info).esal));
    prev->rlink=NULL;
    free(cur);
    return first;
}

NODE delete_f(NODE first)
{
    NODE next;
    if(first==NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    next=first->rlink;
    printf("%s\n%d\n%d\n",((first->info).name),((first->info).eid),((first->info).esal));
    next->llink=NULL;
    free(first);
    return next;
}

void display(NODE first)
{
    NODE cur = first;
    if(first==NULL)
    {
        printf("no elements\n");
    }
    while(cur!=NULL)
    {
        printf("%s\n%d\n%d\n",((cur->info).name),((cur->info).eid),((cur->info).esal));
        cur=cur->rlink;
    }
}

int main()
{
    NODE first=NULL;
    int ch;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.insert rear\n 2.insert front\n 3.delete rear\n 4.delete front\n 5.display\n 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : first =insert_rear(first);
                    break;
            case 2 : first =insert_f(first);
                     break;
            case 3 : first =delete_rear(first);
                     break;
            case 4 : first =delete_f(first);
                     break;
            case 5 : display(first);
                     break;
            case 6 : exit(0);
            default : printf("wrong choice\n");
                      exit(0);
        }
    }
    
    return 0;
}