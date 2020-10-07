#include<stdio.h>
#include<stdlib.h>
const int r=2;
const int c=3;
int display(int b[r][c])
{
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++){
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
return 0;
}
int main(void)
{
int a[2][3]={{1,2,3},{4,5,6}};
display(a);
}