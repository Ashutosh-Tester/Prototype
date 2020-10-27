#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node* next;
	int data;
};struct Node* head,*rear;
void enqueue()
{
	int data;
	struct Node* node,*n;
	node=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter data in the queue : ");
	scanf("%d",&data);
	node->data=data;
	node->next=NULL;
	if(rear==NULL)
	{
		rear=node;
		head=node;
	}
	else
	{
		n=rear;
		while(n->next!=NULL)
		{
            n=n->next;
		}
		n->next=node;
		rear=node;
	}
}
void dequeue()
{
	struct Node* n;
	if(head==NULL)
	{
		printf("\nQueue is Empty");
	}
	else if(head==rear)
	{
		printf("\nThe dequeued element is : %d",head->data);
		head=NULL;
		rear=NULL;
	}
	else
	{
		printf("\nThe dequeued element is : %d",head->data);
		head=head->next;

	}

}
void last()
{
	struct Node*n;
	
	if(rear==NULL)
	{
		printf("\nThe Queue is Empty");
	}
	else
	{
		n=rear;
		printf("\nThe rear element is : %d",n->data);
	}


}
void front()
{
	struct Node*n;
	
	if(head==NULL)
	{
		printf("\nThe Queue is Empty");
	}
	else
	{
		n=head;
		printf("\nThe front element is : %d",n->data);
	}

}
int main(void)
{
	int a,size,i;
	size=0;
	do
	{
		printf("\n\n1: Insert Element");
		printf("\n2: Delete Element");
		printf("\n3: Display last Element");
		printf("\n4: Display Front Element");
		printf("\n5: Press 5 to exit");
		printf("\nEnter your Choice: ");
		scanf("%d",&a);
		switch(a){
		case 1:printf("\nEnter size of queue : ");
		scanf("%d",&size);
		for(i=0;i<size;i++)
		{
			enqueue();
		}
		break;
		case 2:dequeue();
		break;
		case 3:last();
		break;
		case 4:front();
		break;
		case 5:exit(0);
		break;
		default:printf("\nEnter correct choice"); 

	}
}
	while(a<=5);
}