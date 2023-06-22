#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* link;
};
typedef struct node* NODE;

NODE getnode()
{
	NODE X;
	X= (NODE)malloc(sizeof(struct node));
	if(X==NULL)
	{
		printf("memory not avilable\n");
		exit(0);
	}
	return X;
}

void insert_front(NODE head,int item)
{
	NODE next,temp;
	temp=getnode();
	next=head->link;
	temp->info=item;
	head->link=temp;
	temp->link=next;
}

void insert_rear(NODE head , int item)
{
	NODE temp,cur,prev;
	temp=getnode();
	temp->link=NULL;
	temp->info=item;
	prev=head;
	cur=head->link;
	while(cur!=NULL)
	{
		prev = cur;
		cur=cur->link;
	}
	prev->link = temp;
}

void delete_front(NODE head)
{
	NODE next;
	int elem;
	if(head->link==NULL)
	{
		printf("empty sll with header\n");
		return;
	}
	next = head-> link;
	elem = next->info;
	printf("deleted element is %d",elem);
	head->link=next->link;
	free(next);
}

void delete_rear(NODE head)
{
	NODE cur,prev;
	if(head->link==NULL)
	{
		printf("empty sll with header\n");
		return;
	}
	prev=head;
	cur=head->link;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("%d is the deleted element\n",cur->info);
	prev->link=NULL;
	free(cur);
}

void display(NODE head)
{
	NODE cur;
	cur=head->link;
	if(head->link==NULL)
	{
		printf("empty sll with header\n");
		return;
	}
	while(cur->link!=NULL)
	{
		printf("%d\n",cur->info);
		cur=cur->link;
	}
}

int main()
{
	NODE head;
	head->link=NULL;
	int ch,item;
	while(1)
	{
		printf("enter the chioce\n");
		printf("1.insert front\n 2. insert rear\n 3. delete front\n 4.delete rear\n 5.display\n 6.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("enetr the element to be inserted \n");  	
            		scanf("%d",&item);
			         insert_front(head,item);
			         break;
			case 2 : printf("enetr the element to be inserted \n");  					 					         					 
                     scanf("%d",&item);
			         insert_rear(head,item);
			         break;
			case 3 : delete_front(head);
				     break;
			case 4 : delete_rear(head);
				     break;
			case 5 : display(head);
				      break;
			case 6 : exit(0);
		}
	}
	return 0;
}