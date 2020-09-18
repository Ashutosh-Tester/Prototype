#include<stdio.h>
int main(void)
{
	int i,j,index,length,k;
	k=0;
	int a[]={1,4,2,6,8,3,9};
	length=sizeof(a)/sizeof(int);
	int b[length-1];
	printf("Enter the index to be deleted\n");
	scanf("%d",&index);
	printf("Elements before Deletion : ");
	for(i=0;i<length;i++)
	{
	printf("%d ",a[i]);	
	}
	for(j=0;j<length;j++)
	{
		if(j==index)
		{
			continue;
		}
		b[k++]=a[j];
	}
	printf("\nElements after Deletion : ");
	for(int l=0;l<length-1;l++)
	{
		printf("%d ",b[l]);
	}
}