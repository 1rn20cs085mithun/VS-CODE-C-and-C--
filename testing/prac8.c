#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node * llink;
	int info ;
	struct node * rlink;
};
typedef struct node * NODE;

NODE getnode()
{
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	if(x==NULL)
	{
		printf("memory not available\n");;
		exit(0);
	}
	return x;
}


NODE delete_bst(NODE root,int elem)
{
	 NODE cur,parent,suc,parent_insuc,insuc;
	 cur=root;
	 if(cur==NULL)
	 {
	 	return root;
	 }
	 while(cur!=NULL)
	 {
	 	if(cur->info==elem)
	 		break;
	 	parent = cur;
	    if(elem>cur->info)
	    {
	    	cur=cur->rlink;
	    }
	    else
	   		cur=cur->llink;
	  }
	  if(cur->llink==NULL && cur->rlink ==NULL)// CASE 1
	  {
	  	if(parent->llink==cur)
	  		parent->llink=NULL;
	  	else
	  		parent->rlink=NULL;
	  	free(cur);
	  	return root;
	  }
	  if(cur->llink==NULL || cur->rlink== NULL)
	  {
	  	if(cur->llink==NULL )
	  		suc=cur->rlink;
	  	else
	  		suc=cur->llink;
	  	if(parent->llink ==cur)
	  		parent->llink==suc;
	  	else
	  		parent->rlink==suc;
	  	free(cur);
	  	return root;
	  }
	  if(cur->llink!=NULL && cur->rlink !=NULL)
	  {
	  	insuc=cur->rlink;
	  	parent_insuc=cur;
	  	while(insuc->llink!=NULL)
	  	{
	  		parent_insuc =insuc;
	  		insuc=insuc->llink;
	  	}
	  		suc=insuc->rlink;
	  		cur->info =insuc->info;
	  		parent_insuc ->llink=suc;
	  		free(insuc);
	  		return root;
	  }
}
	  		
	  
	 		
NODE insert_bst(NODE root, int elem)
{
	NODE temp,cur,prev;
	temp = getnode();
	temp->llink=temp->rlink=NULL;
	temp->info=elem;
	if(root==NULL)
	{
		return temp;
	}
	cur=root;
	prev=NULL;
	while(cur!=NULL)
	{
		prev=cur;
		if(cur->info > elem)
		{
			cur=cur->llink;
		}
		else
			cur=cur->rlink;
	}
	if(prev->info > elem)
	{
		prev->llink = temp;
	}
	else
		prev->rlink = temp;
	return root;
}

void search_bst(NODE root,int key)
{
	NODE cur;
	if(root==NULL)
	{
		printf("empty bst\n");
	}
	cur=root;
	while(cur!=NULL)
	{
		if(cur->info == key)
		{
			printf("the key element is found\n");
			return;
		}
		if(cur->info > key)
		{
			cur=cur->llink;
		}
		else
			cur=cur->rlink;
	}
	printf("the key element is not found\n");
	return;
}

void preorder(NODE root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d\n",root->info);
	preorder(root->llink);
	preorder(root->rlink) ;
}


void preorder_it(NODE root)
{
	NODE cur=root,s[30];
	int top=-1;
	if(root == NULL)
		return;
	while(1)
	{
		while(cur!= NULL)
		{
			printf("%d\n",cur->info);
			s[++top] = cur;
			cur= cur->llink;
		}
		if(top!=-1)
		{
			cur = s[top--];
			cur=cur->rlink;
		}
		else 
			return;	
	}
}

void inorder(NODE root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->llink);
	printf("%d\n",root->info);
	inorder(root->rlink) ;
}

void inorder_it(NODE root)
{
	NODE cur=root,s[30];
	int top=-1;
	if(root == NULL)
		return;
	while(1)
	{
			while(cur!= NULL)
			{
				s[++top] = cur;
				cur= cur->llink;
			}

			if (top!=-1)
			{
				cur = s[top--];
				printf("%d\n",cur->info);
				cur=cur->rlink;
			}
			else 
				return;	
	}
}

void postorder(NODE root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->llink);
	postorder(root->rlink) ;
	printf("%d\n",root->info);
}

int main()
{
	NODE root = NULL;
	int ch,i,n,elem,key;
	while(1)
	{
		printf("enter the choice\n");
		printf("1.create bst\n 2.search a key in bst\n 3.preorder recursive\n 4.inorder recursive\n 5.postorder recursive\n 6. preorder iterative \n7. inorder iterartive\n 8.deletion of node in bst\n 9. exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("enter the number of elements to be inserted\n");
					 scanf("%d",&n);
					 for(i=0;i<n;i++)
					 {
					 	printf("enter the element to be inserted\n");
					 	scanf("%d",&elem);
					 	root=insert_bst(root,elem);
					 }
					 break;
			case 2 : printf("enter the key element to be searched\n");
					 scanf("%d",&key);
					 search_bst(root,key);
					 break;
			case 3 : preorder(root);
					 break;
			case 4 : inorder(root);
					 break;
			case 5 : postorder(root);
					 break;
			case 6 : preorder_it(root);
					 break;
			case 7 : inorder_it(root);
					 break;
			case 8 : printf("enter the the element that is present in bst to be deleted except root node\n");
					 scanf("%d",&elem);
					 delete_bst(root,elem);
					 break;
			case 9 : exit(0);
		}
	}
	return 0;
}