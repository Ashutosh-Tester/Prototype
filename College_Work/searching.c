#include<stdio.h>
int search(int a[],int element,int size)
{
	for(int j=0;j<size;j++)
	{
		if(a[j]==element){
			return j;
		}
	}


}
int main(void)
{
   int i,element,size;
   printf("\nEnter the size of array\n");
   scanf("%d",&size);
   int a[size];
   printf("\nEnter elements in the array\n");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\nEnter the element to be searched\n");
   scanf("%d",&element);
   i=search(a,element,size);
   printf("\nThe element %d is found at position %d ",element,i+1);

}