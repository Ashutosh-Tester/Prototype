#include<stdio.h>
void powerset(int a[],int size)
{
   int i=0,j;
   printf("\nSubsets : ");
   while(i<size)
   {
   	printf(" {%d} ",a[i++]);
   }
   for(i=0;i<size;i++)
   {
   	for(j=i+1;j<size;j++)
   	{
   		printf("{%d,%d}  ",a[i],a[j]);

   	}
   }
   
}
int main(void)
{
   int a[]={1,2,3,4};
   int size=sizeof(a)/sizeof(int);
   powerset(a,size);

}