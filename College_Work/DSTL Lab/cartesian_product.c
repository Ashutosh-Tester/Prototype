#include<stdio.h>
void cartesian(int b[],int a[],int size,int size2)
{
	int i,j,k=0;
	int c[size*size2];
	printf("\nCartesian Product of both sets: ");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("{%d,%d} ",a[i],b[j]);
			c[k++]=a[i]*b[j];
			
		}
	}
	printf("\nCartesian product : ");
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
int main()
{
	int i;
	int b[]={6,7,8,9,10};
	int size=sizeof(b)/sizeof(int);
	int a[]={2,3,4,5};
	int size2=sizeof(a)/sizeof(int);
	printf("\nSet A : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSet B : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",b[i]);
	}
	cartesian(b,a,size,size2);

}