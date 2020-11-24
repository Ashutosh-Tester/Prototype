#include<stdio.h>
int sort(int a[],int low,int high)
{
   int m=(low+high)/2;
	sort(a,l,m);
	sort(a,m+1,h);
	merge(a,);
}
int merge()
{
	

}
int main(void)
{
	int a[]={15,5,24,8,1,3,16,10,20};
	int l,h,size;
	size=sizeof(a)/sizeof(int);
	l=0;
	h=size-1;
	sort(a,l,h);
}