#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	a=1;b=2;c=3;d=0;
	d=a+b*c;
	printf("%d\n",d);
	d=(a+b)*c;
	printf("%d\n",d);
return 0;
}