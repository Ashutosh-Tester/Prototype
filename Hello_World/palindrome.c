#include<stdio.h>
 void palindrome(int n)
{
	int i,r,s,k;
	k=n;s=0;
	while(n!=0)
	{
	r=n%10;
	s=s*10+(r);
	n=n/10;
	}
	if(s==k)
	printf("PALINDROME");
	else
		printf("NOT PALINDROME\nREVERSE IS = %d",s);

}
int main()
{
	int inp;
	printf("enter the number\n");
	scanf("%d",&inp);
	palindrome(inp);
	return 0;

}