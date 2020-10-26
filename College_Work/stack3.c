//Implemented Stack using Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node* next;
	int data;
};struct Node* top;
void push()
{
	int data;
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the data : ");
	scanf("%d",&data);
	 node->data=data;
	if(top==NULL)
	{
	 node->next=NULL;
	 top=node;

	}
	else
	{
		n=top;
		while(n->next!=NULL)
		{
			n=n->next;
		}
		n->next=node;
		node->next=NULL;
	}
	

}
void peek()
{
	struct Node* n,*temp;
	if(top==NULL)
	{
		printf("\nStack is Empty");
	}
	else
	{
		n=top;
		if(n->next==NULL)
		{
			printf("\nThe peeked element is : %d",n->data);
		}
		else{
		while(n->next->next!=NULL)
		{
			n=n->next;
		}
		temp=n;
		temp=temp->next;
		printf("\nThe peeked element is : %d",temp->data);}
	}

}
void display()
{
	struct Node* n;
	n=top;
	if(top==NULL)
	{
		printf("\nStack is Empty ");
	}
	else
	{
		printf("\nThe Stack is : ");
		while(n!=NULL)
		{
			printf("%d ",n->data);
            n=n->next;
		}
	}


}
void pop()
{
	struct Node* n,*temp;
	n=top;
	if(top==NULL)
	{
		printf("\nStack is Empty");
	}
	else
	{
		if(n->next==NULL)
		{
		  printf("\nThe popped element is : ");
		  printf("%d",n->data);
		  top=NULL;
		}
		else 
		{
			while(n->next->next!=NULL){
				n=n->next;
			}
			temp=n;
			temp=temp->next;
		    printf("\nThe popped element is : ");
		    printf("%d",temp->data);
		    n->next=NULL;
		    free(temp);
	    }
	}

}

int main(void)
{
	int i,a,size;a=0;i=0;size=0;
	do
	{
		printf("\n\n1: Push element in the stack");
		printf("\n2: Pop element from the stack");
		printf("\n3: Peek element of the stack");
		printf("\n4: Display elements of the stack");
		printf("\n5: Press 5 for exit");
		printf("\nEnter your choice : ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:printf("\nEnter length of the stack : ");
			scanf("%d",&size);
			for(i=0;i<size;i++)
			{
				push();
			}
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			default:printf("\nEnter correct choice");
		}

	}while(a<=4);
}