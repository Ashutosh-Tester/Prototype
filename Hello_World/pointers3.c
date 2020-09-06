#include<stdio.h>
int main(void)
{
	int a,b;
	a=4;
	int *p,**p2;
	p=&a;
	p2=&p;
	printf("*p = %d\n",*p);
	printf("**p2 = %d\n",**p2);
	return 0;

}