#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void delete_by_pos(int pos)
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
void delete_by_number(int element)
{
	struct Node* n,*temp;
	n=head;
	bool flag=false;
	while(n!=NULL)
	{
		if(n->data==element)
		{
			flag=true;
			temp=n;
			break;		
		}
		n=n->next;
	}
	if(flag==false)
	{
		printf("\nThere is no such number in the List");
	}
	else
	{
		n=n->next;
		temp=temp->prev;
		if(n!=NULL){
		temp->next=n;
		n->prev=temp;}
		else
		{
			temp->next=n;
		}
	}

}
void display()
{
	struct Node*n;
	n=head;
	if(head==NULL)
	{
		printf("\nThe List is empty");
	}
	else
	{
	printf("\nList : ");
	while(n!=NULL)
	{
		printf("%d ",n->data);
		n=n->next;

	}}
}
int main(void)
{
	add(0,1);
	add(1,2);
	add(2,3);
	add(3,4);
	add(4,5);
	add(0,10);
	delete_by_pos(0);
	delete_by_number(2);
	display();
}