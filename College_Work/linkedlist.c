#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data,pos;
	struct Node* next;
};struct Node* head=NULL;
void add(int data)
{
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	// printf("\nEnter elements in the list\n");
	// scanf("%d",&node->data);
	node->data=data;
node->next=NULL;
if(head==NULL)
{
head=node;
}
else
{
	n=head;
while(n->next!=NULL){
	n=n->next;
}
n->next=node;
}

}
void display()
{
struct Node* n;

if(n==NULL)
{
	printf("\nThe list is empty\n");
}
else
{
	n=head;
	printf("\nThe elements are : ");
	while(n->next!=NULL)
	{
		
		printf("%d ",n->data);
		n=n->next;
	}
	printf("%d ",n->data);
}
}
void delete()
{
	struct Node* n=head;
	if(n==NULL)
	{
		printf("\nThe List is empty\n");
	}
	else
	{
		n=head;
		printf("%d ",n->data);
		head=head->next;
	}
}
void delete_begin()
{struct Node* n;
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty\n");
	}
	else
	{
		printf("\nThe Deleted element is : %d\n",n->data);
		head=head->next;

	}

}
void delete_end()
{
	struct Node* n,*node;
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty\n");
	}
	else if(head->next==NULL)
	{   n=head;
		head=NULL;
		printf("\nThe Deleted element is : %d \n",n->data);
	}
	else
	{
		while(n->next!=NULL)
		{
			node=n;
			n=n->next;
		}
		printf("\nThe Deleted element is : %d ",n->data);
		node->next=NULL;
		free(n);
	}
}
void delete_pos(int pos)
{
struct Node* n,*node;
n=head;
if(head==NULL)
{
	printf("\nThe List is Empty\n");
}
else
{
	for(int i=0;i<pos-1;i++)
	{
		node=n;
		n=n->next;
		if(n==NULL)
		{
			printf("\nError\n");
		}
	}
	printf("\nDeleted Element is : %d\n",n->data);
	node->next=n->next;
	free(n);
}

}
int main()
{
// add();
// add();
// add();
// add();
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	delete();
	delete_end();
	delete_begin();
	display();

}