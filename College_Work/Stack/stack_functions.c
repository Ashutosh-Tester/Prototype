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
	printf("\nStack Overflow\n");
}
}
void peep()
 {
 	int c;
 	if(top>=0)
 	{
 		c=stack[top];
 		printf("%d",c);
 	}
 	else{
 		printf("\nStack Is Empty");
 	}
 }
void display()
{int pointer=top;
	//printf("%d\n",top);
	if(pointer==-1)
	{
		printf("\nStack is Empty Now");
	}
	else
	{
	for(int i=0;i<=pointer;i++)
	{
		printf("%d ",stack[i]);}
	}
}
int pop()
{
	if(top>=0)
	{
		
		int n=stack[top];
		top--;
		return n;
	}


 }

int main(void)
{
 int a;
 do{
 printf("\n\nEnter 1 for push\nEnter 2 for dislpay\nEnter 3 for pop\nEnter 4 for peek\nEnter the choice\n");
 scanf("%d",&a);
 switch(a){
 	case 1:printf("\nEnter the elements in the stack\n");
 	int ele;
 	for(int i=0;i<Size;i++){
 	scanf("%d",&ele);
    push(ele);}
    break;
    case 2:printf("\nElements in the stack : ");
    display();
    break;
    case 3:printf("\nElements in the stack : ");
    display();
     int h=pop();
    printf("\n\nPopped Element : %d\n",h);
    break;
    case 4:printf("\nThe Peeked Element is : ");
    peep();
    break;
  default: printf("\nEnter correct choice");}
 }
 while(a<=4);
  return 0;  

}
