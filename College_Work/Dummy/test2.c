#include<stdio.h>
#include<stdlib.h>
const int r=2;
const int c=3;
const int t=2;
int display(int b[r][c][t])
{
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++){
		for(int k=0;k<t;k++){
		printf("%d ",b[i][j][k]);}
		printf("\n");
	}
	printf("\n");
}
return 0;
}
int main(void)
{
int a[2][3][2]={{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
display(a);
}