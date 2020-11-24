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
	printf("\nThe difference of two sets : ");
	for(i=0;i<k;i++){
	printf("%d ",c[i]);}

}
int main(void)
{
	int a[]={1,3,4,5,6,7,9,10,13};
	int b[]={3,5,7,9,11,12};
	int size=sizeof(a)/sizeof(int);
	int size1=sizeof(a)/sizeof(int);
    difference(a,b,size,size1);
}