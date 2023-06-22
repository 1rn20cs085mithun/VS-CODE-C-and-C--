#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct stud
{
    char name[50];
    int usn;
    int marks;
};

struct node
{
    struct stud info;
    struct node *link;
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
    NODE cur,prev,temp;
    temp=getnode();
    temp->link=NULL;
    printf("enter the details of student\n");
    scanf(" %s%d%d",((temp->info).name),&((temp->info).usn),&((temp->info).marks));
    cur=first;
    prev=NULL;
    if(first == NULL)
    {
        return temp;
    }
    while(cur!=NULL)
    {
        prev = cur;
        cur = cur->link;
    }
    prev->link=temp;
    return first;
}

NODE insert_f(NODE first)
{
    NODE temp;
    temp=getnode();
    temp->link=NULL;
    printf("enter the details of student\n");
    scanf(" %s%d%d",((temp->info).name),&((temp->info).usn),&((temp->info).marks));
    if(first == NULL)
    {
        return temp;
    }
    temp->link = first;
    first=temp;
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
    next= first->link;
    printf("%s\n%d\n%d\n",((first->info).name),((first->info).usn),((first->info).marks));
    free(first);
    return next;
}

NODE delete_rear(NODE first)
{
    NODE cur,prev;
    cur=first;
    prev=NULL;
    if(first == NULL)
    {
        printf("no elements\n");
        return NULL;
    }
    if(first->link==NULL)
    {
        printf("%s\n%d\n%d\n",((first->info).name),((first->info).usn),((first->info).marks));
        free(first);
        return NULL;
    }
    while(cur->link!=NULL)
    {
        prev = cur;
        cur = cur->link;
    }
    printf("%s\n%d\n%d\n",((cur->info).name),((cur->info).usn),((cur->info).marks));
    prev->link=NULL;
    free(cur);
    return first;
}

void display(NODE first)
{
    NODE cur=first;
    int c=0;
    if(first == NULL)
    {
        printf("no elements\n");
        exit(0);
    }
    while(cur!=NULL)
    {
        c++;
         printf(" name=%s\n usn=%d\n marks=%d\n",((cur->info).name),((cur->info).usn),((cur->info).marks));
         cur=cur->link;
         
    }
    printf("the number of nodes are %d\n",c);
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