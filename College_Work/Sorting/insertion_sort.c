#include<stdio.h>
void sort(int a[],int size)
{
	int i,j,k,temp;temp=0;
	for(i=0;i<size;i++)
	{
		k=0;
		for(j=1;j<size;j++)
		{
			if(a[k]>a[j])
				{
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
				k++;
		}
	}
	printf("\nArray After Sorting : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

}
int main()
{
	int i,size=10,j;
	j=size;
	int a[size];
	size=sizeof(a)/sizeof(int);
	for(i=0;i<size;i++)
	{
		a[i]=j--;
	}
	printf("\nArray Before Sorting : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	sort(a,size);

}