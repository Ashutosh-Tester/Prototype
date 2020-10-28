#include<stdio.h>
int main(void)
{
	int size,x,index,j,i;
	i=0;
	int a[]={1,4,2,6,3,5,7};
	size=sizeof(a)/sizeof(int);
	printf("Enter the element to be inserted\n");
	scanf("%d",&x);
	printf("Enter the index\n");
	scanf("%d",&index);
  int b[size+1];
  for(j=0;j<size+1;j++,i++)
  {
    if(j==index)
    {  b[j]=x;
    	j=j+1;
    } 
    b[j]=a[i];
}
for(int k=0;k<size+1;k++)
{
	printf("%d ",b[k]);
}
}


