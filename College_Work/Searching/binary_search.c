#include<stdio.h>
int search(int a[],int element,int size)
{
	int I,M,L;L=size-1;I=0;
	while(I<L){
	M=(I+L)/2;
	 if(element==a[M]){
		return M; }
	else if(element>a[M])
	{
		I=M+1;
	}
	else
	{
		L=M-1;
	}
}
return -1;
   
}
int main(void)
{
  int element,size,pos;size=20;pos=0;
  int a[size];
  for(int i=0;i<size;i++)
  {
  	a[i]=i;
  }
  //size=sizeof(a)/sizeof(int);
  printf("\nEnter the number to be searched : ");
  scanf("%d",&element);
  for(int i=0;i<size;i++)
  {
  	printf("%d ",a[i]);
  }
 pos=search(a,element,size);
 if(pos>-1){
 printf("\nThe number %d is found at position : %d",element,pos+1);}
 else
 {
 	printf("\nElement is not present");
 }
}