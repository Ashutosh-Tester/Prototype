#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node*next;
	int data;
};struct Node* top;
void push(int data);
void pop();
void display();
void change();
void push(int data)
{
	struct Node*n;
	n=top;
	struct Node*node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->next=NULL;
    if(top==NULL)
    {
    	top=node;

    }
    else{
    	
    	while(n->next!=NULL)
    	{
    		n=n->next;
    	}
    	n->next=node;
    }
    
}
void pop()
{
	if(top==NULL)
	{
		printf("\nStack is Empty");
	}
	else{
	
	
		printf("%d ",top->data);
		top=top->next;
	}

}
void display()
{
	struct Node*prev=NULL;
    struct Node* current=top;
    struct Node* next=NULL;
    while(current!=NULL)
    {
    	next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    top=prev;  
	struct Node* n;
	if(top==NULL)
	{
		printf("\nStack is Empty");
	}
	else{
		n=top;
	while(n!=NULL)
{
	printf("%d ",n->data);
	n=n->next;
}}

}
int main(void)
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	pop();
	pop();
}