//This Program is to print fibonacci series.
#include<stdio.h>
int main(void)
{
	int i,a,b,c,n;c=0;
	a=0;b=1;
	printf("\nEnter the limit : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : ");
	printf("%d , %d ",a,b);
	
	for(i=1;i<n-1;i++)
	{
		c=a+b;
        printf(", %d ",c);
        a=b;
        b=c;
	}


}