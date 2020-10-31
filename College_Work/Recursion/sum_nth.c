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
int main()
{
	int a,b;
	printf("\nEnter the number : ");
	scanf("%d",&a);
    b=sum(a);
	printf("\n%d ",b);

}