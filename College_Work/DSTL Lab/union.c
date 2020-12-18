#include<stdio.h>
// int size_calculator(int a[],int b[],int size,int size1)
// {
//     int i,j,c=0,a1=0,b1=0;
//     for(i=0;i<size;i++)
//     {
//     	for(j=0;j<size;j++)
//     	{
//     		if(a[i]==b[j])
//     			c++;
//     	}
//     }
//     a1=size-c;
//     b1=size1-c;
//     c=a1+b1+c;
//     return c;
// }
void print_union(int a[],int b[],int size,int size1)
{
	int i=0,j=0,k=0;
	//int l=size_calculator(a,b,size,size1);
    // int c[l];
    int c[size+size1];
     while(i<size && j<size1)
     {
     	if(a[i]<b[j]){
     		c[k++]=a[i++];
     	}
     	else if(b[j]<a[i]){
     		c[k++]=b[j];
     	}
     	else{
     		c[k++]=b[j++];
     	  i++;}
     }
     while(i<size){
     	c[k++]=a[i++];}
     while(j<size1){
     	c[k++]=b[j++];}
     	printf("\nUnion of two sets : ");
     	for(int i=0;i<k;i++)
     	{
     		printf("%d ",c[i]);
     	}

}

// void set_union(int a[],int b[],int m,int n)//This is another approach to perform 
//                                            // union on two sets of arrays.
// {
// 	int c[m+n],i,j,k=0,flag=0;
// 	for(i=0;i<m;i++)
// 	{
// 		c[k++]=a[i];
// 	}
	
// 	for(i=0;i<n;i++)
// 	{flag=0;
// 		for(j=0;j<m;j++)
// 		{
// 			if(b[i]==c[j]){
//                flag=1;
//            break;}
// 		}
// 		if(flag==0)
		
// 			c[k++]=b[i];
// 	}
		 
// 	printf("\nUnion of two sets : ");
// 	for(i=0;i<k;i++)
// 	{
// 		printf("%d ",c[i]);
// 	}

// }
int main(void)
{
   int a[]={1,3,4,5,7,9,10};
   int b[]={3,5,7,9,11,12};
   int size=sizeof(a)/sizeof(int);
    int size1=sizeof(b)/sizeof(int);
     printf("\nArray 1 : ");
   for(int i=0;i<size;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\nArray 2 : ");
   for(int j=0;j<size1;j++)
   {
      printf("%d ",b[j]);
   }
   print_union(a,b,size,size1);
  
   // set_union(a,b,size,size1);
}
