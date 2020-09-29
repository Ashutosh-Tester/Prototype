#include<stdio.h>
#define Size 20
char stack[Size];
int top=-1;
char push(char a)
{
	if(top<Size-1)
	{
		if(top<0){
			top=0;
		stack[top]=a;}
		else{
			stack[top+1]=a;
			top++;
		}
	}
	else{
		printf("Stack Overflow\n");
	}

}
void display()
{
	printf("Reversed String : ");
    for(int i=top;i>-1;i--)
    {
       printf("%c",stack[i]);
    }
}


int main(void)
{
	int i;char data;
	printf("Enter the String\n");
	for(i=0;i<Size;i++){
	scanf("%c",&data);
    push(data);}
	printf("\n");
	display();

}