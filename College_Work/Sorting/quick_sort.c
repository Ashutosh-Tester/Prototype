#include<stdio.h>

int  partition(int a[],int low,int high)
{
	int pivot=a[low];int temp;
	int i=low+1,j=high;
	do
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}

	}
	while(i<j);
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
    return j;

}
void sort(int a[],int low,int high)
{
	int partitionindex;
	
	if(low<high){
		partitionindex=partition(a,low,high);
	sort(a,low,partitionindex-1);
	sort(a,partitionindex+1,high);}
    
}
int main(void)
{
	int i,size=0;
	int a[]={11,15,20,13,8,9,10,1,11};
	size=sizeof(a)/sizeof(int);
	printf("\nArray Before Sorting : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray After Sorting : ");
	int low=0;
	int high=size-1;
	sort(a,low,high);
    for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}