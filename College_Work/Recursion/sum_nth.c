#include<stdio.h>
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		printf("%d ",a);
		return a+sum(a-1);
	}
}
int factorial(int b)
{
	if(b==0)
	{
		return 1;
	}
	else
	{
		printf("%d ",b);
		return b*factorial(b-1);

	}
}
int main()
{
	int a,b;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	printf("\nThe sum is : %d ",sum(a));
	printf("\nEnter the number : ");
	scanf("%d",&b);
	printf("\nThe factorial is : %d ",factorial(b));

}