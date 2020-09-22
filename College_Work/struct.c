#include<stdio.h>
struct info
{
	int a[10];
};
int main(void)
{
	struct info in[]={1,2,3,4,5,6,7,8,9,10};
	int s=sizeof(in)/sizeof(int);
	printf("%d\n",s);
	for(int i=0;i<s;i++){
	printf("%d ",in[i]);}
}