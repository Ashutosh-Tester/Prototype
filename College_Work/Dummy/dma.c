#include<stdio.h>
#include<stdlib.h> 
int main(void)
{
int *ptr=(int*)malloc(5*sizeof(int));
for(int i=0;i<5;i++)
{
	scanf("%d",&ptr[i]);
}
for(int j=0;j<5;j++)
{
	printf("%d ",ptr[j]);
}
}