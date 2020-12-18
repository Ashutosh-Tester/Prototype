#include<math.h  >
#include<stdio.h>
void powerset(int a[],int size)
{
   int i=0,j;int power=0;
   power=pow(2,size);
   printf("\nNo. of subsets : %d " ,power);
   printf("\nSubsets : ");
   while(i<size)
   {
   	printf(" {%d} ",a[i++]);
   }
   for(i=0;i<size;i++)
   {
   	for(j=i+1;j<size;j++)
   	{
   		printf(" {%d,%d}  ",a[i],a[j]);

   	}
   }   
}
int main(void)
{
   int a[]={1,2,3};
   int size=sizeof(a)/sizeof(int);
   powerset(a,size);
}