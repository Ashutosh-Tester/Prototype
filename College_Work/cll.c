// This program is to implement Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	int pos;
	struct Node* next;
};struct Node* head;
void add(int data)
{
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		node->data=data;
	    node->next=node;
	    head=node;	
	}
	else
	{
		node->data=data;
		node->next=head->next;
		head->next=node;
		head=node;
	}
}
void print()
{
	struct Node* n;
	if(head==NULL)
	{
	   printf("\nList is Empty\n");	
	}
	else
	{ printf("\nThe elements are : ");
		n=head->next;
		do
		{
			printf("%d ",n->data);
			n=n->next;
		}
		while(n!=head->next);
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
     }
     else{
     node->data=data;
     node->next=head->next;
     head->next=node;}
}
void add_pos(int data,int pos)
{
	struct Node *node,*n,*temp;
	node=(struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		node->data=data;
		node->next=node;
		head=node;
	}
	else 
	{
		if(pos!=0){
	  n=head->next;
	   for(int i=0;i<pos-1;i++)
     	{
		    temp=n;
		    n=n->next;
	    }
	     node->data=data;
	     temp->next=node;
	     node->next=n; }
	     else
	     {
	     	printf("\nPlease enter valid position");
	     }
	}  
}
void delete_begin()
{
	struct Node* temp;
	if(head->next==NULL)
	{
	   head=NULL;
    } 
    else
    {
        temp=head->next;
        head->next=temp->next;
    }
}
void delete_last()
{
	int size;size=0;
	struct Node* n,*node;
	n=head->next;
	if(head->next==NULL)
	{
		head=NULL;
	}
	else{
	do{
         size++;
         n=n->next;
	}
	while(n!=head->next);
	printf("\nSize of the list : %d \n",size);
	for(int i=0;i<size-1;i++)
	{
          node=n;
          n=n->next;
	}
	node->next=head->next;
	head=node;
	// printf("\nValue the node is pointing too : %d \n",node->data);
	// printf("\nValue the head is pointing too : %d \n",head->data);
	// printf("\nValue the n is pointing too : %d \n",n->data);
}
}
void delete_pos(int pos)
{
struct Node* node,*n;
n=head->next;
if(head->next==NULL)
{
	head=NULL;
}
else
{
for(int i=0;i<pos-1;i++)
{
  node=n;
  n=n->next;
}
node->next=n->next;
}
}
void test_demo()
{
	printf("\nThe element the last is pointing -> %d \n",head->data);
}
int main()
{
add(1);
add(2);
add(3);
add(4);
add(5);
add_begin(6);
add_begin(7);
add(8);
print();
add_pos(10,6);
add_pos(11,2);
print();
delete_begin();
print();
add(77);
print();
delete_begin();
print();
delete_last();
print();
delete_pos(3);
print();
//test_demo();
}
