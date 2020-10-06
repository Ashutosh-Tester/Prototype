#include<stdio.h>
#include<stdlib.h>
struct info
{
	int *in[5];
	int *a;
};
int main(void)
{
	struct info inf;
	int n=5;
	inf.a=(int*)malloc(n*(sizeof(int)));
	//inf.in[]={1,2,3,4,5,6,7,8,9,10};
	// int s=sizeof(inf.in)/sizeof(int);
	// printf("Enter Elements in array\n");
	// for(int j=0;j<s;j++)
	// {
	// 	scanf("%d",&inf.in[j]);
	// }
	// for(int i=0;i<s;i++){
	// printf("%d ",inf.in[i]);}
	if(inf.a==NULL)
	{
		printf("The array is not initialised");
	}
	else
	{
		printf("\nEnter Elements in array\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&inf.a[i]);

		}
	}
	for(int j=0;j<n;j++)
	{
		printf("%d ",inf.a[j]);
	}
	int f=6;
	inf.a=realloc(inf.a,f*(sizeof(int)));
	int w=sizeof(inf.a)/sizeof(int);
	printf("\nSize = %d\nEnter new number\n",w);
	for(int i=n;i<f;i++)
	{
		scanf("%d",&inf.a[i]);
	}
		for(int j=0;j<f;j++)
	{
		printf("%d ",inf.a[j]);
	}
}