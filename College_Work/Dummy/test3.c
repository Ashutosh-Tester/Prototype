#include<stdio.h>
#include<stdlib.h>
//#define Size 5
struct demo{
	int data;
struct demo *next;
};struct demo*head=NULL;
void linkedlist()
{
	struct demo *node,*n;
	node=(struct demo*)malloc(sizeof(struct demo));
     if(node==NULL)
     {
     	printf("List is Empty");
     }
     printf("Enter elements in Linked List\n");
     	scanf("%d",&node->data);
     	node->next=NULL;
    
     if(head==NULL)
     {
     	head=node;
     }
     else{
     	n=head;
     	while(n->next!=NULL)
     	{
     		n=n->next;
     	}
     	n->next=node;}   
}
void show()
{
	struct demo* node;
	node=head;
	if(node==NULL)
	{
		printf("list is empty");
	}
	else{
	printf("\nElements in the List : ");
	while(node->next!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}}
	printf("%d ",node->data);
}
void delete_end()
{
	struct demo* node,*n;
	if(node==NULL)
	{
		printf("List is Empty");
	}
	else if(head->next==NULL)
	{
		n=head;
		head=NULL;
		printf("\nThe deleted element is = %d\n",n->data);
		free(n);

	}
	else
	{
		n=head;
		while(n->next!=NULL)
		{
			node=n;
			n=n->next;

		}
		printf("\nThe Deleted element is = %d\n",n->data);
		node->next=NULL;
		free(n);
	}

}
void delete_begin()
{
	struct demo *node,*n;
	if(head==NULL)
	{
		printf("\nList is Empty");
	}
	else
	{
		n=head;
		head=head->next;
		printf("\nThe deleted element is = %d ",n->data);
	}
}
void delete_pos()
{struct demo *node,*n;
	int pos;
	printf("\nEnter the position to be deleted\n");
	scanf("%d",&pos);
    n=head;
	for(int i=0;i<pos-1;i++)
	{
		node=n;
		n=n->next;
		if(n==NULL)
		{
			printf("Error");
		}
	}
	printf("\nDeleted Element = %d",n->data);
	node->next=n->next;
	free(n);
}
int main(void)
{ int Size=0;
	printf("Enter size of Linked List\n");
	scanf("%d",&Size);
	for(int i=0;i<Size;i++){
	linkedlist();}
      show(); 
      // delete_end();
      // show();
      // delete_begin();
      // show();
      delete_pos();
      show();

}