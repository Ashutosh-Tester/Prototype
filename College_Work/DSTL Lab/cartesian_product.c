#include<stdio.h>
int cartesian(int b[],int a[],int size,int size2)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf(" {%d,%d} ",b[i],a[j]);
		}
	}
}
int main()
{
	int b[]={6,7,8,9};
	int size=sizeof(b)/sizeof(int);
	int a[]={2,3,4,5};
	int size2=sizeof(a)/sizeof(int);
	cartesian(b,a,size,size2);

}