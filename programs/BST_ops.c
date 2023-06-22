#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node
{
    struct node*llink;
    int info;
    struct node* rlink;
};
typedef struct node * NODE;

NODE getnode()
{
    NODE x;
    if(x==NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return x;
}

NODE insert_BST(NODE root, int elem)
{
    NODE temp,cur,prev;
    temp=getnode();
    temp->info=elem;
    temp->llink=temp->rlink=NULL;
    cur=root;
    prev=NULL;
    if(root ==NULL)
    {
        return temp;
    }

    while(cur!=NULL)
    {
        prev=cur;
        if(cur->info>elem)
        {
            cur=cur->llink;
        }
        else
           cur=cur->rlink;
    }
    if(prev->info>elem)
    {
        prev->llink=temp;
    }
    else
        prev->rlink=temp;
    return root;
}

void search_BST(NODE root, int key)
{
    NODE cur;
    if(root == NULL)
    {
        printf("EMPTY BST\n");
        return;
    }
    while(cur!=NULL)
    {
        if(cur->info==key)
        {
            printf("The key element is found in BST\n");
            return;
        }
        if(cur->info>key)
        {
            cur=cur->llink;
        }
        else
           cur=cur->rlink;
    }
    printf("the key element is not found in BST\n");
     return;
}

void preorder(NODE root)
{
    if(root==NULL)
        return ;
    printf("%d",root->info);
    preorder(root->llink);
    preorder(root->rlink);    
}

void inorder(NODE root)
{
    if(root==NULL)
        return ;
    inorder(root->llink);
    printf("%d",root->info);
    inorder(root->rlink);    
}

void postorder(NODE root)
{
    if(root==NULL)
        return ;
    postorder(root->llink);
    postorder(root->rlink);    
    printf("%d",root->info);
}

int main()
{
    NODE root=NULL;
    int n,i,ch,key,elem;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.create BST\n 2.Search key\n 3.preorder\n 4.inorder\n 5.postorder\n 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("enter the number of elements\n");
                     scanf("%d",&n);
                     for(i=0;i<n;i++)
                     {
                        printf("enter the element to be inserted\n");
                        scanf("%d",&elem);
                        root=insert_BST(root,elem);
                     }
                     break;
            case 2 :  printf("enter the key elem to be searched\n");
                      scanf("%d",&key);
                      search_BST(root,key);
                      break;
            case 3 :  printf("preorder\n");
                      preorder(root);
                      break;
            case 4 :  printf("inorder\n");
                      inorder(root);
                      break;
            case 5 :  printf("postorder\n");
                      postorder(root);
                      break;
            case 6 : exit(0);
            default : printf("wrong choice\n");
                      exit(0);
        }
    }
    return 0;
}