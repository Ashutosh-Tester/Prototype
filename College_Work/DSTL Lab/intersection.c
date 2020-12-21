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
    printf("\nIntersection of two sets : { ");
    for(i=0;i<k;i++)
    {
    	printf("%d ",c[i]);
    }
    printf("}");
}
int main(void)
{
  int i;
	int a[]={1,3};
	int b[]={3,4,5,7};
	 int size=sizeof(a)/sizeof(int);
    int size1=sizeof(b)/sizeof(int);
    printf("\nSet A : { ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("}\nSet B : { ");
    for(i=0;i<size1;i++)
    {
       printf("%d ",b[i]);
    }
    printf("}");
    intersection_set(a,b,size,size1);
}