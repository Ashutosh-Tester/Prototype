#include<stdio.h>
void insertion(int a[],int size)
{
	int i,e=4,pos=2;
	size++;
	for(i=size-1;i>=pos;i--)
	{
		
		a[i]=a[i-1];
	}
	a[pos]=e;

for(i=0;i<size;i++)
{
	printf("%d ",a[i]);
}
}
int main(void)
{
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(int);
	insertion(a,size);

}