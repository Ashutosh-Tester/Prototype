#include<stdio.h>
void AND()
{
	printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d %d %d\n",i,j,i&j);
		}
	}

}
void OR()
{
  printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d %d %d\n",i,j,i|j);
		}
	}
}
void NOT()
{
printf("\nA Y\n");
	
		for(int j=0;j<=1;j++)
		{
			printf("%d %d\n",j,!j);
		}
	
}
int main()
{
	int ch;
	printf("\nEnter 1 to display truth table of AND");
	printf("\nEnter 2 to display truth table of OR");
	printf("\nEnter 3 to display truth table of NOT");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:AND();
		break;
		case 2:OR();
		break;
		case 3:NOT();
		break;
		default:printf("\nEnter correct choice");
	}


}