#include<stdio.h>
#include<stdlib.h>
int print(int a)
{
	int f=1;

	if(a==0)
	{
		exit(0);
	}
	else
	{   
		return f*print(--a);
		
	}

 printf("%d ",f);
}
int main()
{
	int a=3;
	print(a);


}