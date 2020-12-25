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
void NAND()
{
	printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d %d %d\n",i,j,!(i&j));
		}
	}

}
void NOR()
{
	printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d %d %d\n",i,j,!(i|j));
		}
	}


}
void XOR()
{
	printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			if(i==j)
			printf("%d %d %d\n",i,j,0);
		    else
		    printf("%d %d %d\n",i,j,i|j);	
		}
	}

}
void XNOR()
{
	printf("\nA B Y\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			if(i==j)
			printf("%d %d %d\n",i,j,1);
		    else
		    printf("%d %d %d\n",i,j,i&j);	
		}
	}


}
int main()
{
	int ch;
	printf("\nEnter 1 to display truth table of AND");
	printf("\nEnter 2 to display truth table of OR");
	printf("\nEnter 3 to display truth table of NOT");
	printf("\nEnter 4 to display truth table of NAND");
	printf("\nEnter 5 to display truth table of NOR");
	printf("\nEnter 6 to display truth table of XOR");
	printf("\nEnter 7 to display truth table of XNOR");
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
		case 4:NAND();
		break;
		case 5:NOR();
		break;
		case 6:XOR();
		break;
		case 7:XNOR();
		break;
		default:printf("\nEnter correct choice");
	}
}