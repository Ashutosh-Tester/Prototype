#include<stdio.h>
int fib(int n)
{int a=n;
	if(n<=1)
	{
		return n;
	}
	else
	{   printf("%d ",a);
		return fib(n-1)+fib(n-2);

	
	}
}
int main()
{
	int n;
	printf("\nEnter the limit : ");
	scanf("%d",&n);
	printf("\n%d",fib(n));
}