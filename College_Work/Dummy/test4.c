#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};struct Node *top;
void push(int data)
{
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	// printf("\nEnter element in the stack\n");
	// scanf("%d",&node->data);
if(top==NULL)
{  top=(struct Node*)malloc(sizeof(struct Node));
	top->data=data;
	top->next=NULL;
}
else{
    node->data=data;
	node->next=top;
	top=node;}
}
void pop()
{
	struct Node* temp=top;
if(top==NULL)
{
	printf("\nStack is Empty\n");
}
else
{
	printf("\nThe popped element is : %d \n",temp->data);
	top=top->next;
}
}
void peek()
{
	struct Node* temp=top;
	if(top==NULL)
	{
		printf("\nStack is Empty Now\n");
	}
	else
	{
		printf("\nThe peeked element is : %d \n",temp->data);
	}
}
void display()
{
	struct Node* n;
	n=top;
	if(top==NULL)
	{
		printf("\nStack is Empty\n");
	}
	else
	{
		printf("\nThe elements in the stack are : ");
		while(n->next!=NULL){
		printf("%d -> ",n->data);
		n=n->next;}
		printf("%d ",n->data);
	}
}
int main(void)
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	pop();
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
	peek();


}