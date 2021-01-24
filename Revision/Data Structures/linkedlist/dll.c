#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node* next,*prev;
	int data;
};struct Node* head=NULL;
void add(int pos,int data)
{
	struct Node* node,*n,*temp;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	if(head==NULL||pos==0)
	{
		if(head==NULL)
		{
		head=node;
		node->prev=NULL;
		node->next=NULL;}
		else
		{
			n=head;
			node->next=n;
			node->prev=NULL;
			n->prev=node;
			head=node;
		}
	}
	else 
	{
		n=head;
		for(int i=0;i<pos;i++)
		{
			temp=n;
			n=n->next;
		}
		temp->next=node;
		node->prev=temp;
		node->next=NULL;
	}

}

void delete(int pos)
{
	struct Node* n,*temp;
	n=head;
	if(head==NULL||pos==0)
	{
		if(head==NULL){
		printf("\nList is empty");}
		else if(n->next!=NULL)
		{
			n=n->next;
			head->next=NULL;
			n->prev=NULL;
			head=n;
		}
		else
		{
			head=NULL;
		}
	}
	else{
		
	for(int i=0;i<pos;i++)
	{
		temp=n;
		n=n->next;
	}
	n=n->next;
	if(n!=NULL){
	temp->next=n;
	n->prev=temp;}
    else{
	temp->next=n;

    }}
}
void display()
{
	struct Node*n;
	n=head;
	printf("\nList : ");
	while(n!=NULL)
	{
		printf("%d ",n->data);
		n=n->next;

	}
}
int main(void)
{
	add(0,1);
	add(1,2);
	add(2,3);
	add(3,4);
	add(4,5);
	add(0,10);
	display();
	delete(0);
	display();
	delete(4);
	delete(3);
	delete(2);
	delete(1);
	delete(0);
	display();
}