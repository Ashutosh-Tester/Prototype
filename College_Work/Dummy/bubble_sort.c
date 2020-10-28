//This program sorts the array using bubble sort method.
#include<stdio.h>
void sort(int a[],int size)
{
	int i,j,temp;temp=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++){
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("\nArray After Sorting : ");
	for(j=0;j<size;j++)
	{
		printf("%d ",a[j]);
	}

}
int main(void)
{int size=0;
	int a[]={11,15,20,13,19,21,22,12,18};
	printf("\nArray Before Sorting : ");

	size=sizeof(a)/sizeof(int);
	for(int i=0;i<size;i++)
{
printf("%d ",a[i]);
}
	sort(a,size);

}