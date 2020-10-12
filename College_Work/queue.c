#include<stdio.h>
#define Size 5
int queue[Size];
int head=-1;int rear=-1;
void add()
{ int data;
	if(rear==Size-1)
	{
		printf("\nQueue is Full Now\n");}
else
{
	if(head==-1)
		head=0;
		
	else
		rear=rear+1;
	printf("\nEnter element\n");
	 scanf("%d",&data);
		queue[rear]=data;
}

}

void remove_out()
{
	if(head==-1||head>rear)
	{
		printf("\nUnderflow\n");
	}
	else
		{
			printf("%d ",queue[head]);
			head++;
		}
}
int main()
{
	add();
	add();
	add();
	add();
	add();
	remove_out();
	remove_out();
	remove_out();
	remove_out();
	remove_out();
}