#include<stdio.h>
int main(void)
{
	int length,length2,j,k;
	k=0;
  int a[]={1,2,3,4,5,6,7};
  int b[]={8,9,10};
  length=sizeof(a)/sizeof(int);
  length2=sizeof(b)/sizeof(int);
  int c[length+length2];
  printf("Before Insertion a array : ");
  for(int r=0;r<length;r++)
  {
  	printf("%d ",a[r]);
  }
  printf("\nBefore Insertion b array : ");
  for(int o=0;o<length2;o++)
  {
  	printf("%d ",b[o]);
  }
  printf("\n");
  for(int i=0;i<length;i++)
  {
  	c[i]=a[i];
  }
   for(j=length;j<length+length2;j++,k++)
  {
  	c[j]=b[k];
  }
  printf("Merged Array : ");
  for(int e=0;e<length+length2;e++)
  {
  	printf("%d ",c[e]);
  }
}