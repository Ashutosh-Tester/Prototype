#include<stdio.h>
//#include<conio.h>
int main()
{
	//clrscr();
	int a,b,s,*p,*p2;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	*p=a;
	*p2=b;
	s=*p+*p2;
	printf("\n%d %d",p,p2);
	printf("\n%d %d",*p,*p2);
	printf("\nthe sum is = %d",s);
}
