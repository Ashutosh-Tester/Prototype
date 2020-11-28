#include<stdio.h>
void bubble_sort(int a[],int size)
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
void selection_sort(int a[],int size)
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
void insertion_sort(int a[],int size)
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
int merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high){
    mid=(low+high)/2;
	merge_sort(a,low,mid);
	merge_sort(a,mid+1,high);
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
	int ch,i,size,low,high;
    do{
	printf("\nEnter 1 for Bubble Sort");
	printf("\nEnter 2 for Selection Sort");
	printf("\nEnter 3 for Insertion Sort");
	printf("\nEnter 4 for Merge Sort");
	printf("\nEnter 5 for Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	if(ch==5){break;}
    printf("\nEnter size of array : ");
    scanf("%d",&size);
	printf("\nEnter the elements of unsorted array\n");
	 int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	switch(ch)
	{
		case 1: bubble_sort(arr,size);
		break;
		case 2: selection_sort(arr,size);
		break;
		case 3: insertion_sort(arr,size);
		break;
		case 4: low=0;
		high=size-1;
		merge_sort(arr,low,high);
		printf("\nArray after sorting : ");
		display(arr,size);
	    break;
		// default: printf("\nEnter correct choice");
	}
}while(ch<5);
}