#include<stdio.h>
int check_series(int);
int fibonacci(int);
int prime(int);

int check_series(int n)
{
  if(n%2==0)
  {
   prime(n);
  }
  else
  {
   fibonacci(n);
  }
}
int fibonacci(int n)
{
   int first,second,third,element;
   first=0;second=1;third=0;
   printf("\n %d %d ",first,second);
   for(int i=1;i<n-1;i++)
      {
         third=first+second;
         //element=third;
         first=second;
         second=third;
         printf("%d ",third);
      }

}
int prime(int n)
{int c=0,element=0;
   for(int i=2;i<=n;i++)
   {   c=0;
      if(i%2==0)
      for(int j=1;j<=i;j++)
      {
         if(i%j==0)
         {
            c++;
         }
      }
         if(c==2)
         {
            element=i;
         }
      
   }
printf("\n%d ",element);
}
int main()
{
int a;
printf("\nEnter the limit : ");
scanf("%d",&a);
check_series(a);
}