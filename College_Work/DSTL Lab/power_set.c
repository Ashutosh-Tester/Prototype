#include<math.h  >
#include<stdio.h>
void powerset(int a[],int size)
{
   int i=0,j;int power=0;
   power=pow(2,size);
   printf("\nNo. of subsets : %d " ,power);
   for(i=0;i<power;i++)
   {
      for(j=0;j<size;j++)
      {
         if(i&(1<<j))
            printf("%d ",a[j]);
      }
      printf("\n");
   }

   	
      
}
int main(void)
{
   int a[]={1,2,3,4};
   int size=sizeof(a)/sizeof(int);
   powerset(a,size);
}