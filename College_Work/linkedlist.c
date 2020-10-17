#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data,pos;
	struct Node* next;
};struct Node* head=NULL;
void add()
{
	int data;
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter elements in the list\n");
	scanf("%d",&data);
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
	exit(0);
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
		exit(0);
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
		exit(0);
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
void delete_pos()
{
struct Node* n,*node;
n=head;int pos;
if(head==NULL)
{
	printf("\nThe List is Empty\n");
	exit(0);
}
else
{
	printf("\nEnter the position to be deleted : ");
	scanf("%d",&pos);
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
	int a,b,i;a=0;b=0;
	
	do{
		printf("\n\n1 : Insert elements ");
	printf("\n2 : Display");
	printf("\n3 : Delete element");
	printf("\n4 : Delete element at the beginning");
	printf("\n5 : Delete element at the last");
	printf("\n6 : Delete the element at any position");
	printf("\nPlease Enter your choice : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("\nEnter the size of List\n");
		        scanf("%d",&b);
		        for(i=1;i<=b;i++)
		        {
		 	       add();}
		         break;
		case 2: display();
		break;
		case 3: delete();
		break;
		case 4: delete_begin();
		break;
		case 5: delete_end();
		break;
		case 6: delete_pos();
		break;
		default: printf("\nPlease Enter correct choice");
	}
}
	while(a<=6);

}
