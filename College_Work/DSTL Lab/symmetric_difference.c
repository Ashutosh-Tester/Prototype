#include<stdio.h>
int sy_difference(int a[],int b[],int m,int n)
{int i,j,k;i=0;j=0;k=0;
	int c[m+n];
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i];
			i++;
		}
		else if(b[j]<a[i])
		{
			c[k++]=b[j];
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}	
	while(i<m)
	{
       c[k++]=a[i];
       i++;
	}
	while(j<n)
	{
		c[k++]=b[j];
		j++;
	}
printf("\nSymmetric Difference between A and B is : ");
for(i=0;i<k;i++)
{
	printf("%d ",c[i]);
}

}
int main(void)
{
  int a[]={1,2,3,4,5,6,8};
  int b[]={2,3,5,6,7,9,10,11,12};
  int size=sizeof(a)/sizeof(int);
  int size1=sizeof(b)/sizeof(int);
  printf("\nArray A : ");
  for(int i=0;i<size;i++)
  {printf("%d ",a[i]);}
  printf("\nArray B : ");
   for(int i=0;i<size1;i++)
  {printf("%d ",b[i]);}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
  sy_difference(a,b,size,size1);
}