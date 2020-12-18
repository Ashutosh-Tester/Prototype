#include<stdio.h>
void logicgates(int a,int b)
{
	printf("\nAND\na = %d b = %d -> a AND b = %d",a,b,a&b);
	printf("\nOR\na = %d b = %d -> a OR b = %d",a,b,a|b);
	printf("\nNOT\na = %d -> a NOT = %d\nb = %d -> b NOT = %d",a,!a,b,!b);

}
int main()
{
	int a,b;
	printf("\nEnter Input 1 : ");
	scanf("%d",&a);
	printf("\nEnter Input 2 : ");
	scanf("%d",&b);
	logicgates(a,b);

}