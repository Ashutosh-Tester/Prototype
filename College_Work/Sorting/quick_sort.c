#include<stdio.h>
void sort(int a[],int size)
{
	int i,pivot,temp,j;pivot=size-1;
	j=1;
	for(i=0;i<=pivot;i++,j++)
	{
		pivot=size-1;
		if(a[i]>a[pivot])
		{
			temp=a[i];
			a[i]=a[pivot];
			a[pivot]=temp;
		}
		else
		{
			
		}
    }
	printf("\nArray After Sorting : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

}
int main(void)
{
	int i,size=0;
	int a[]={11,15,20,13,19,21,22,12,18,10,1};
	size=sizeof(a)/sizeof(int);
	printf("\nArray Before Sorting : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	sort(a,size);
}