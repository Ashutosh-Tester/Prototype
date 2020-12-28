#include<math.h>
#include<stdio.h>
void powerset(int set[],int size)
{
   int i,j;int power=0;
   power=pow(2,size);
   printf("\nNo. of subsets : %d " ,power);
   for(i=0;i<power;i++)
   {
      for(j=0;j<size;j++)
      {
         if(i&(1<<j))
            printf("%d ",set[j]);
      }
      printf("\n");
   }

   	
      
}
int main(void)
{
   int size,i;
   printf("\nEnter the size of set : ");
   scanf("%d",&size);
   int set[size];
   printf("Enter the elements\n");
   for(i=0;i<size;i++)
   {
      scanf("%d",&set[i]);
   }
   powerset(set,size);
}