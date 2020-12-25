#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node* next;
	int data,pos;
};struct Node* head=NULL;
void add(int data)
{
	struct Node* node,*n;
	n=head;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	if(head==NULL)
	{
		head=node;
		node->next=NULL;
    }
    else
    {
    	while(n->next!=NULL){
    		n=n->next;
    	}
    	n->next=node;
    	node->next=NULL;
    }
}
void add_last(int data)
{
	struct Node* node,*n;
	n=head;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->next=NULL;
	if(head==NULL)
	{
		head=node;
		
	}
	else{
	while(n->next!=NULL)
	{

		n=n->next;
	}
	n->next=node;
	}
}
void display()
{
	struct Node* n;
	n=head;
	if(head==NULL)
	{
		printf("\nList is Empty");
	}
	else{
		printf("\n");
	while(n!=NULL)
	{   
		printf("%d ",n->data);
		n=n->next;
	}
}

}
void add_pos(int pos,int data)
{
	int i;
	struct Node* n,*node,*temp;
	n=head;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	if(head==NULL)
	{
		head=node;
		node->next=NULL;
	}
	else if(pos==0)
	{
		node->next=n;
		head=node;
	}
	else
	{
	for(i=0;i<=pos-1;i++)
	{
		temp=n;
		n=n->next;
	}
	temp->next=node;
	node->next=n;

    }   
}
void delete_pos(int pos)
{
   int data=pos;
   struct Node* n,*temp;
   n=head;
   if(head==NULL)
   {
   	printf("\nList is Empty");
   }
   else if(data==0)
   {
   	   n=n->next;
   	   head=n;
   }
   else
   {
   	for(int i=0;i<=data-1;i++)
   	{
   		temp=n;
   		n=n->next;
   	}
   	temp->next=n->next;
   }
}
int main(void)
{
	add(1);
	add(2);
	add(3);
	add(4);
	add_pos(4,11);
	add_pos(0,-1);
	display();
	delete_pos(0);
	delete_pos(4);
	display();

}