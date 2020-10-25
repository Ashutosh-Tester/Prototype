#include<stdio.h>
#define Size 6
int queue[Size];
int head=-1;
int rear=-1;
void offer()
{ 
	int data;data=0;
	printf("\nEnter element\n");
	    scanf("%d",&data);
	if(rear==Size)
	{
		printf("\nQueue is Full Now\n");}
else
{
	if(head==-1){
		head=0;
	    rear=0;
	    queue[rear++]=data;
	}

	else{
		   queue[rear]=data;
		   rear++;
		}
}

}
void display()
{
	if(head==rear)
	{
		head=-1;
		rear=-1;
		printf("\nThe Queue is Empty Now");

	}
	else{
		printf("\nThe elements are : ");
	for(int i=head;i<rear;i++)
	{
		printf("%d ",queue[i]);

	}
}
}

void poll()
{
	if(head==-1)
	{
		head=0;
	}
	else if(head==rear)
	{
		printf("\nnull\n");
		head=-1;
		rear=-1;
	}
	else
		{

			printf("\nThe polled element is : %d ",queue[head]);
			head++;
		}
	}

void element()
{
	if(head==rear)
	{
		printf("\nnull\n");
	}
	else
	{
      
       printf("\nThe peeked element is : %d\n", queue[head]);
	}

}
int main()
{int i,size,a;a=0;size=0;
	do
	{
		printf("\n1: Insert element");
		printf("\n2: Delete element");
		printf("\n3: Peek element");
		printf("\n4: Display element");
		printf("\n5: Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&a);
		switch(a)
		{
			case 1: //printf("\nEnter the size : ");
			       //   scanf("%d",&size);
			//Size is allocated so no need of entering size.
			    for(i=0;i<Size;i++)
			    {
				    offer();
			    }
			break;
			case 2:poll();
			break;
			case 3:element();
			break;
			case 4:display();
			break;
			default:printf("\nPlease enter correct choice");
		}

	}
	while(a<=4);
	
}