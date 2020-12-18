#include<stdio.h>
void complement(int U[],int A[],int size,int size2)
{
	int i=0,j=0,k=0;
	int C[size+size2];
	while(i<size && j<size2)
	{
		if(U[i]<A[j])
		{
			C[k++]=U[i++];
		}
		else if(A[j]<U[i])
		{
			j++;

		}
		else
		{
			i++;j++;
		}
	}
	while(i<size)
	{
		C[k++]=U[i++];
	}
	i=0;
	printf("\nComplement of set A : ");
	while(i<k)
	{
		printf("%d ",C[i++]);
	}

}
int main()
{
	int U[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(U)/sizeof(int);
	int A[]={2,3,4,5};
	int size2=sizeof(A)/sizeof(int);
	printf("\nSet U : ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",U[i]);
	}printf("\nSet A : ");
	for(int i=0;i<size2;i++)
	{
		printf("%d ",A[i]);
	}
	complement(U,A,size,size2);

}