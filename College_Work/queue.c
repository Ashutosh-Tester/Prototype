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
	for(int i=0;i<Size;i++)
	{
		printf("%d ",queue[i]);

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
			printf("%d ",queue[head]);
			head++;
		}
	}

void element()
{
	if(head==Size)
	{
		printf("\nnull\n");
	}
	else
	{
      
       printf("\nThe peeked element is : %d\n", queue[head]);
	}

}
int main()
{
	offer();
	offer();
	offer();
	offer();
	offer();
	offer();
	element();
	poll();
	poll();
	poll();
	poll();
	poll();
	poll();
	element();
}