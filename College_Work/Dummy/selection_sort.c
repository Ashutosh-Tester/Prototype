#include<stdio.h>
void sort(int a[],int size)
{
	int i,j,temp,min;min=0;temp=0;
	for(i=0;i<size;i++)
	{
		min=a[i];
		for(j=i+1;j<size;j++)
		{
			if(a[j]<min){
				min=a[j];
				temp=a[j];
			    a[j]=a[i];
			   a[i]=temp;}
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