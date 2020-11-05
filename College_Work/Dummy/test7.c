#include<stdio.h>
int multiply(int b)
{  int a=5,count=0;;
	
    if(b==0)
    {
    	return 0;
    }
    else
    {   count++;
    	printf("\n%d ",count);
    	return a+multiply(b-1);
    }

}
int main(void)
{
	int a=5,b=6;
	printf("\n%d ",multiply(b));

}