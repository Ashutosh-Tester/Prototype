#include<stdio.h>
int main(void)
{
   int m,n,i,j;
   printf("Enter the row size\n");
   scanf("%d",&m);
   printf("Enter the column size\n");
   scanf("%d",&n);
	int mat[m][n];
	printf("Enter the elements in array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int count;count=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]!=0)
				count++;
		}
	}
  int k;k=0;
  int sm[3][count];
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{     if(mat[i][j]!=0){
  		sm[0][k]=i;
  	    sm[1][k]=j;
  	    sm[2][k]=mat[i][j];
  	    k++;}
  	}
  }
printf("\n");
for(i=0;i<3;i++)
{
	for(j=0;j<count;j++){
		printf("%d ",sm[i][j]);}
		printf("\n");}
	return 0;
}