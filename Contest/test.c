#include<stdio.h>
void check(int);
void prime(int);
void prime(int a)
{
	int i,c;c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0){
		c++;}
	}
	if(c>0)
		printf("\nPrime");
	else
		printf("\nNot Prime");

}
void check(int a)
{
   if(a<0)
	{
		printf("\nEnter correct number");
	}
	else
	{
		 prime(a);

	}
}
int main()
{
	int a;
	printf("\nEnter the no. : ");
	scanf("%d",&a);
	check(a);
	//prime(a);
   
}