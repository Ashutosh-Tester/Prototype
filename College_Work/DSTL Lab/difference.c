#include<stdio.h>
int difference(int a[],int b[],int m,int n)
{
	int i=0,j=0,k=0;
	int c[m+n];
	while(i<m && j<n)
	{
		if(a[i]<b[j]){
			c[k++]=a[i];
			i++;
		}
		else if(b[j]<a[i]){
			j++;
		}
		else{
			i++;
			j++;

		}

	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	printf("\nThe difference of sets A-B : ");
	for(i=0;i<k;i++){
	printf("%d ",c[i]);}

}
int difference1(int a[],int b[],int m,int n)
{
	int i=0,j=0,k=0;
	int d[m+n];
	while(i<m && j<n)
	{
		if(a[i]<b[j]){

			i++;
		}
		else if(b[j]<a[i]){
			d[k++]=b[j];
			j++;
		}
		else{
			i++;
			j++;

		}

	}
	while(j<n)
	{
		d[k++]=b[j++];
	}
	printf("\nThe difference of sets B-A : ");
	for(i=0;i<k;i++){
	printf("%d ",d[i]);}


}
int main(void)
{
	int a[]={1,2,3,4,5,6,8};
	int b[]={2,3,5,6,7,9,10,11,12};
	int size=sizeof(a)/sizeof(int);
	int size1=sizeof(b)/sizeof(int);
	printf("\nArray a : ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray b : ");
	for(int j=0;j<size1;j++)
	{
	printf("%d ",b[j]);
    } 
    difference(a,b,size,size1);
    difference1(a,b,size,size1);
}