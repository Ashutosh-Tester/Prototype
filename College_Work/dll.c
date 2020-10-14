#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	struct Node* next;
	struct Node* prev;
	int data,pos;
};struct Node* head;

void add(int data);
void print();
void back_print();
void add_begin(int data);
void add_last(int data);
void add_pos(int data, int pos);
void delete_begin();
void delete_last();
void delete_pos(int pos);

void add(int data)
{
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
    node->next=NULL;
	if(head==NULL)
	{
		
		node->prev=NULL;
		head=node;
	}
	else
	{
		n=head;
		while(n->next!=NULL)
		{
			n=n->next;
		}
		n->next=node;
		node->prev=n;
		
	}
}
void print()
{
	struct Node* ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\nThe List is Empty\n");
	}
	else{
	printf("\nThe Elements are : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

}
void back_print()
{
	struct Node* n,*last;
	n=head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	last=n;
	printf("\nThe elements are : ");
	while(last!=NULL)
	{
		printf("%d ",last->data);
		last=last->prev;
	}
}
void add_begin(int data)
{
struct Node* node,*n;
node=(struct Node*)malloc(sizeof(struct Node));
node->data=data;
node->next=head;
node->prev=NULL;
head->prev=node;
head=node;
}
void add_last(int data)
{
   struct Node* node,*n,*last;
   node=(struct Node*)malloc(sizeof(struct Node));
   n=head;
   node->data=data;
   while(n->next!=NULL)
   {
   	  n=n->next;
   }
   last=n;
   node->next=NULL;
   last->next=node;
   node->prev=last;
}
void add_pos(int data,int pos)
{
     struct Node* node,*temp,*n;
     node=(struct Node*)malloc(sizeof(struct Node));
     node->data=data;
     	n=head;
     if(pos>0){
     for(int i=0;i<pos-1;i++)
     {
     	temp=n;
     	n=n->next;
     }
     node->next=n;
      n->prev=node;
     temp->next=node;
     node->prev=temp;
    
 }
 else
 {
 	printf("\nPlease enter correct position\n");
 }

}
void delete_begin()
{ 
	struct Node* n;
	n=head;
	n=n->next;
	head->next=n->next;
	head=n;
	head->prev=NULL;
}
void delete_last()
{
	struct Node* n,*last,*temp;
	n=head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	last=n;
	last=last->prev;
	last->next=NULL;
}
void delete_pos(int pos)
{
	struct Node* n,*temp;
	n=head;
	for(int i=0;i<pos-1;i++)
	{
		temp=n;
		n=n->next;
	}
	n=n->next;
	temp->next=n;
	n->prev=temp;
}
int main()
{
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	add(6);
	print();
	add_begin(8);
	print();
	add_last(7);
	print();
	add_pos(0,4);
	print();
	delete_begin();
	print();
	delete_last();
	print();
	delete_pos(3);
	print();
	back_print();

}