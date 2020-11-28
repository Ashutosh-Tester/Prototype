#include<stdio.h>
int merge(int a[],int low,int mid,int high)
{
	int i,j,k;
	i=low;j=mid+1;k=low;
	int b[100];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
            b[k++]=a[i];
            i++;
		}
			else{
				b[k++]=a[j];
				j++;
			}
	}
	while(i<=mid)
	{
		b[k++]=a[i];
		i++;
	}
	while(j<=high)
	{
		b[k++]=a[j];
		j++;
	}
	for(int i=0;i<k;i++)
		{
			a[i]=b[i];}
	
}
int sort(int a[],int low,int high)
{
	int mid;
	if(low<high){
    mid=(low+high)/2;
	sort(a,low,mid);
	sort(a,mid+1,high);
	merge(a,low,mid,high);}
	
}
int display(int a[],int size)
{
  for(int i=0;i<size;i++)
		{
			printf("%d ",a[i]);}
}
int main(void)
{
	int a[]={15,5,24,8,1,3,16,10,20};
	int l,h,size;
	size=sizeof(a)/sizeof(int);
	l=0;
	h=size-1;
	printf("\nArray before Sorting : ");
	display(a,size);
	sort(a,l,h);
	printf("\nArray after Sorting : ");
	display(a,size);
}