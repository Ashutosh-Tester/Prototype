#include<stdio.h>
int main()
{
	int i,size,s,e,m;
	int a[]={1,2,3,4,5,6,7,8,9,10};
	size=sizeof(a)/sizeof(int);
	s=0;e=size-1;
	m=(s+e)/2;
	printf("\nMid value : %d ",m);
	for(i=0;i<=m;i++)
	{
		a[i]++;
	}
	for(i=m+1;i<size;i++)
	{
		a[i]++;
	}
		printf("\nArray After Modification : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
}