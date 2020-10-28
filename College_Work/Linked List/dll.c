//This program is to implement Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	struct Node* next;
	struct Node* prev;
	int data,pos;
};struct Node* head;

void add();
void print();
void back_print();
void add_begin();
void add_last();
void add_pos();
void delete_begin();
void delete_last();
void delete_pos();

void add()
{
	int data;
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the element : ");
	scanf("%d",&data);
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
void add_begin()
{
	int data;
struct Node* node,*n;
node=(struct Node*)malloc(sizeof(struct Node));
printf("\nEnter the element : ");
	scanf("%d",&data);
	node->data=data;
	if(head==NULL)
	{
		node->data=data;
		node->next=NULL;
		node->prev=NULL;
		head=node;
	}
	else{
node->next=head;
node->prev=NULL;
head->prev=node;
head=node;}
}
void add_last()
{
	int data;
   struct Node* node,*n,*last;
   node=(struct Node*)malloc(sizeof(struct Node));
   n=head;
   printf("\nEnter the element : ");
	scanf("%d",&data);
   node->data=data;
   if(head==NULL)
   {
   	node->next=NULL;
   	node->prev=NULL;
   	head=node;
   }
   else{
   while(n->next!=NULL)
   {
   	  n=n->next;
   }
   last=n;
   node->next=NULL;
   last->next=node;
   node->prev=last;}
}
void add_pos()
{
	int data,pos;
     struct Node* node,*temp,*n;
     node=(struct Node*)malloc(sizeof(struct Node));
     printf("\nEnter the element : ");
	scanf("%d",&data);
	  node->data=data;
     if(head==NULL)
     {
     	node->next=NULL;
     	node->prev=NULL;
     	head=node;
     }
   else{
     	n=head;
     	printf("\nEnter the position : ");
	scanf("%d",&pos);
     if(pos>0){
     	
     	
     for(int i=0;i<pos-1;i++)
     {
     	temp=n;
     	n=n->next;
     }
     node->next=n;
      n->prev=node;
     temp->next=node;
     node->prev=temp;}
 else
 {
 	printf("\nPlease enter correct position\n");
 }
}

}
void delete_begin()
{ 
	struct Node* n;
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		printf("\nList is Empty");
	}
	else{
	n=n->next;
	head->next=n->next;
	head=n;
	head->prev=NULL;}
}
void delete_last()
{
	struct Node* n,*last,*temp;
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		printf("\nList is Empty");
	}
	else{
	while(n->next!=NULL)
	{
		n=n->next;
	}
	last=n;
	last=last->prev;
	last->next=NULL;}
}
void delete_pos()
{
	int pos;
	struct Node* n,*temp;
	n=head;
	if(n==NULL)
	{
		printf("\nList is Empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		printf("\nList is Empty");
	}else{
	printf("\nEnter the position to be deleted : ");
	scanf("%d",&pos);
	for(int i=0;i<pos-1;i++)
	{
		temp=n;
		n=n->next;
	}
	n=n->next;
	temp->next=n;
	n->prev=temp;}
}
int main()
{
		int a,b,i;a=0;b=0;
	
	do{
		printf("\n\n1 : Insert elements ");
	printf("\n2 : Insert element at the beginning");
	printf("\n3 : Insert element at the last");
	printf("\n4 : Insert element at a specific position");	
	printf("\n5 : Display");
	printf("\n6 : Display the List in the reverse order");
	printf("\n7 : Delete element at the beginning");
	printf("\n8 : Delete element at the last");
	printf("\n9 : Delete the element at any position");
	printf("\n10 : Press 10 to exit");
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
		case 2: add_begin();
		break;
		case 3: add_last();
		break;
		case 4: add_pos();
		break;
		case 5: print();
		break;
		case 6: back_print();
		break;
		case 7:delete_begin();
		break;
		case 8:delete_last();
		break;
		case 9:delete_pos();
		break;
		default: printf("\nPlease Enter correct choice");
	}
}
	while(a<=9);
}
