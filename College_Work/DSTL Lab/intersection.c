#include<stdio.h>
int intersection_set(int a[],int b[],int m,int n)
{
     int i=0,j=0,k=0;
     int c[m+n];
     while(i<m && j<n)
     {
     	if(a[i]<b[j])
     		{i++;}
     	else if(b[j]<a[i])
     	{j++;}
           else
          {
          	c[k++]=b[j++];
          	i++;
           }
    }
    printf("\nIntersection of two sets : ");
    for(i=0;i<k;i++)
    {
    	printf("%d ",c[i]);
    }
}
int main(void)
{
	int a[]={1,3,5,7,9,10};
	int b[]={3,5,7,9,11,12};
	 int size=sizeof(a)/sizeof(int);
    int size1=sizeof(b)/sizeof(int);
    intersection_set(a,b,size,size1);
}