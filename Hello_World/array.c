#include<stdio.h>
int main()
{
	int size,size1,val,c;
	c=0;
	int a[]={1,2,3,4,5,6,7,8,9,10};
	//size=sizeof(a);
	size1=sizeof(a)/sizeof(a[0]);
	//printf("size = %d",size);
	printf("\nsize1 = %d\n",size1);
	printf("Enter the value to be checked\n");
	scanf("%d",&val);
	for(int i=0;i<size;i++)
    {
    	if(a[i]==val){
    		c=i;
    		break;}    	   	
    }
   printf("Found !!! \nThe location is = %d",c);
   return 0;

}
