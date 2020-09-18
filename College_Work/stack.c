#include<stdio.h>
#define Size 5
int stack[Size];
int top=-1;
int push(int data)
{
if(top<Size-1)
{
	if(top<0)
	{
		top=0;
		stack[top]=data;
	}
	else{
		stack[top+1]=data;
		top++;
	}
}
else
{
	printf("Stack Overflow\n");
}
}
void display()
{
	printf("%d\n",top);
	for(int i=0;i<Size;i++)
	{
		printf("%d ",stack[i]);
	}
}
// int pop()
// {
// 	if(top>=0)
// 	{
// 		int n=stack[top];
// 		top--;
// 		return 

// 	}

// }
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	return 0;

}