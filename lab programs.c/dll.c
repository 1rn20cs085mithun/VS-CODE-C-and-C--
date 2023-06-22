#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* llink;
    int info;
    struct node* rlink;
};
typedef struct node* NODE;

NODE getnode()
{
    NODE x;
    x =(NODE) malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memory not available\n");
        return NULL;
    }
    return x;
}

NODE insert_front(NODE first,int elem)
{
    NODE temp;
    temp = getnode();
    temp -> info = elem;
    temp -> rlink=temp -> llink=NULL;
    if(first == NULL)
    {
        return temp;
    }
    first -> llink = temp;
    temp -> rlink = first;
    return temp;
}

NODE insert_rear(NODE first, int elem)
{
    NODE temp,cur;
    temp = getnode();
    temp -> info = elem;
    temp -> rlink=temp -> llink=NULL;
    if(first == NULL)
    {
        return temp;
    }
    if (first->rlink == NULL)
    {
        first->rlink=temp;
        temp->llink=first;
        return first;
    }
    cur=first;
     while(cur->rlink!=NULL)
     {
         cur = cur->rlink;
     }
     cur->rlink=temp;
     temp->llink=cur;
     return first;
}

NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first == NULL)
    {
        printf("no elements in dll\n");
        return NULL;
    }
    if(first->rlink==NULL)
    {
        printf("deleted element is %d\n",first->info);
        free(first);
        return NULL;
    }
    cur=first;
    prev = NULL;
    while(cur->rlink!=NULL)
    {
        prev = cur;
        cur= cur->rlink;
    }
     prev->rlink= NULL;
     printf("deleted element is %d\n",cur->info);
     free(cur);
     return first;
}

NODE delete_front(NODE first)
{
    NODE next;
     if(first == NULL)
    {
        printf("no elements in dll\n");
        return NULL;
    }
    if(first->rlink==NULL)
    {
        printf("deleted element is %d\n",first->info);
        free(first);
        return NULL;
    }
    next=first->rlink;
    next->llink=NULL;
    printf("deleted element is %d\n",first->info);
    free(first);
    return next;
}

void display(NODE first)
{
    NODE cur;
    if(first == NULL)
    {
        printf("no elements in dll\n");
        return;
    }
    cur = first;
    printf("the elments of dll are\n");
    while(cur!=NULL)
    {
        printf("%d\n",cur->info);
        cur=cur->rlink;
    }
}

int main()
{
    NODE first=NULL;
    int elem,ch;
    while(ch)
    {
        printf("enter the choice\n");
        printf("1.insert front\n 2.insert rear\n 3.delete front\n 4.delete rear\n 5.display\n 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("enter the element to be inserted\n");
                     scanf("%d",&elem);
                     first =insert_front( first,elem);
                     break;
            case 2 : printf("enter the element to be inserted\n");
                     scanf("%d",&elem);
                     first =insert_rear( first,elem);
                     break;
            case 3 : first = delete_front(first);
                     break;
            case 4 : first = delete_rear(first);
                     break;
            case 5 : display(first);
                     break;
            case 6:  exit(0);
        }
    }
    return 0;
}