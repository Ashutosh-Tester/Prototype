// This program is to implement Circular Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node*next;
	struct Node*prev;
	int data,pos;
};struct Node* head,*last;
void add()
{
	int data;
	struct Node* node;
	node=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the element : ");
	scanf("%d",&data);
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
void add_begin()
{
	int data;
	struct Node* node;
	node=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter the element : ");
	scanf("%d",&data);
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
void add_last()
{int data;
   struct Node* node,*n;
   node=(struct Node*)malloc(sizeof(struct Node));
   	printf("\nEnter the element : ");
	scanf("%d",&data);
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
void add_pos()
{
	int data,pos;
       struct Node* node,*n,*temp;
       node=(struct Node*)malloc(sizeof(struct Node));
       	printf("\nEnter the element : ");
	scanf("%d",&data);
		printf("\nEnter the position : ");
	scanf("%d",&pos);
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
void delete_pos()
{
	int pos;
	struct Node*n,*temp;
	n=head;
	if(head==NULL)
	{
		printf("\nThe List is Empty");
	}
	else
	{
	     printf("\nEnter the position : ");
	     scanf("%d",&pos);
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
 void size_calculator()
{
	int size;size=0;
	struct Node* n;
	n=head;
	if(head==NULL)
	{
		printf("\nError : List is Empty, cannot calculate size");
		exit(0);
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
	printf("\nThe size of List is : %d ",size);
}
int main()
{
	int a,b,i;a=0;b=0;
	
	do{
		printf("\n\n1 : Insert elements ");
		printf("\n2 : Insert element at the beginning ");
		printf("\n3 : Insert element at the last ");
		printf("\n4 : Insert elements at a specific position ");

	printf("\n5 : Display");
	printf("\n6 : Delete element at the beginning");
	printf("\n7 : Delete element at the last");
	printf("\n8 : Delete the element at any position");
	printf("\n9 : Display elements in reverse order ");
	printf("\n10 : Prints the size of List ");
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
		case 5: show();
		break;
		case 6: delete_begin();
		break;
		case 7: delete_last();
		break;
		case 8: delete_pos();
		break;
		case 9: reverse_show();
		break;
		case 10: size_calculator();
		break;
		default: printf("\nPlease Enter correct choice");
	}
}
	while(a<=10);
}
