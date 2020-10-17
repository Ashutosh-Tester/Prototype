// This program is to implement Circular Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node*next;
	struct Node*prev;
	int data,pos;
};struct Node* head,*last;
void add(int data)
{
	struct Node* node;
	node=(struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		node->data=data;
	    node->next=node;
		head=node;
		last=head;
	}
	else
	{
		node->data=data;
		node->next=last->next;
		node->prev=last;
		last->next=node;
		last=node;
	}
}
void add_begin(int data)
{
	struct Node* node;
	node=(struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		node->data=data;
	    node->next=node;
		head=node;
		last=head;
	}
	else
    {
	 node->data=data;
	 node->next=head;
	 head->prev=node;
	 head=node;
	 last->next=head;
    }
}
void add_last(int data)
{
   struct Node* node,*n;
   node=(struct Node*)malloc(sizeof(struct Node));
   if(head==NULL)
   {
   	 node->data=data;
   	 node->next=node;
   	 head=node;
   	 last=head;
   }
   else
   {
   	 node->data=data;
   	 node->next=head;
     node->prev=last;
   	 last->next=node;
   	 last=node;
     //last->next=head;
    }
}
void add_pos(int data,int pos)
{
       struct Node* node,*n,*temp;
       node=(struct Node*)malloc(sizeof(struct Node));
       if(head==NULL)
       {
       	node->data;
       	node->next=node;
       	head=node;
       	last=head;
       }
       else
       {
       	for(int i=0;i<pos-1;i++)
       	{
       		temp=n;
       		n=n->next;
       	}
       	node->data=data;
       	node->next=n;
       	node->prev=temp;
       	temp->next=node;
       	n->prev=node;
       }
}
void delete_begin()
{
	struct Node* n;
	n=head;
	if(head==NULL)
	{
		printf("\nThe List is Empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		last=NULL;
	}
	else
	{  
		head=n->next;
		last->next=head;
	}
}
void delete_last()
{
	//struct Node* n;
	if(head==NULL)
	{
		printf("\n The List is Empty");
	}
	else if(last==head)
	{   head=NULL;
        last=NULL;
	}
	else{
	last=last->prev;
	last->next=head;
	//n=n->prev;       /* These statements
	//n->nextNULL;         can also be used 
	//last=n;          */ for deletion of last element.               
}
}
void delete_pos(int pos)
{
	struct Node*n,*temp;
	n=head;
	if(head==NULL)
	{
		printf("\nThe List is Empty");
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			temp=n;
			n=n->next;
		}
		n=n->next;
		temp->next=n;
		n->prev=temp;
	}

}
void show()
{
	struct Node* n;
	//n=last->next; // This statement can also be used.
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty");
	}
	else{
	      printf("\nThe elements are : ");	
	do
	{
        printf("%d ",n->data);
        n=n->next;
	}
	while(n!=head);
	//while(n!=last->next);// This conditional statement can also be used. 
}
}
void reverse_show()
{
struct Node* n;
n=last;
if(head==NULL)
{
	printf("\nList is Empty");
}
else
{
	printf("\nThe elements are : ");
	do
	{
		printf("%d ",n->data);
		n=n->prev;

	}
	while(n!=head->prev);
}

}
int size_calculator()
{
	int size;size=0;
	struct Node* n;
	n=head;
	if(head==NULL)
	{
		printf("\nError : List is Empty, cannot calculate size");
	}
	else
	{
		do
		{
          size++; 
          n=n->next;
		}
		while(n!=head);
	}
	return size;
}
int main()
{
	add(2);
	add(3);
	add(5);
	add(6);
	add(7);
	show();
add_begin(1);
add_last(8);
show();
add_pos(4,4);
show();
delete_begin();
delete_begin();
show();
reverse_show();
delete_begin();
reverse_show();
show();
delete_last();
show();
reverse_show();
delete_pos(2);
show();
reverse_show();
int a=size_calculator();
printf("\nSize = %d ",a);

}