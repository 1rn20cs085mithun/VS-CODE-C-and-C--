#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node
{
    struct node*llink;
    int info;
    struct node * rlink;
};
typedef struct node *NODE;

NODE getnode()
{
    NODE x;
    x= (NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memeory is not available\n");
        exit(0);
    }
    return x;
}

NODE insert(NODE root,int item)
{
    NODE temp,cur,prev;
    temp = getnode();
    temp->info=item;
    temp->llink=temp->rlink=NULL;
    if(root==NULL)
    {
        return temp;
    }
    cur=root;
    while(cur!=NULL)
    {
        prev=cur;
        if(cur->info > item)
        {
            cur=cur->llink;
        }
        else
        {
            cur=cur->rlink;
        }
    }
    if(prev->info>item)
    {
        prev->llink=temp;
    }
    else
        prev->llink=temp;   
    
    return root;
}

void search(NODE root,int item)
{
    NODE cur;
    if(root==NULL)
    {
        printf("empty bst\n");
        return;
    }
    cur=root;
    while(cur!=NULL)
    {
        if(cur->info == item )
        {
            printf("successfull search\n");
            return;
        }
        if(cur->info > item)
        {
            cur=cur->llink;
        }
        else
        {
            cur=cur->rlink;
        }
    }
    printf("unsuccessfull search\n");
}

int main()
{
    int n,i,item,key,ch;
    NODE root=NULL;
    printf("enter the number of nodes in the bst\n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choice\n");
        printf("1.create bst\n 2.search\n 3.preorder\n 4.inorder\n 5.postorder\n 6.deletion\n 7.exit\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : for(i=0;i<n;i++)
                     {
                         printf("enter the item to be inserted\n");
                         scanf("%d",&item);
                         root=insert(root,item);
                     }
                     break;
            case 2 : printf("enter the key element to be searched\n");
                     scanf("%d",&key);
                     search(root,key);
                     break;
            case 3 : 
        }
    }

    return 0;
}