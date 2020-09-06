#include<stdio.h>
int main(void)
{
	int a,b,*p,*p2,**p3,**p4;
    a=5,b=6;
printf("a = %d\n",a);
printf("b = %d\n",b);
p=&a;
p2=&b;
// p3=&a;
// p4=&b;
printf("p = %d\n",p);
printf("p2= %d\n",p2);
printf("*p = %d\n",*p);
printf("*p2= %d\n",*p2);
printf("&a = %d\n",&a);
printf("&b= %d\n",&b);
// printf("&p3 = %d\n",&p3);
// printf("&p4= %d\n",&p4);
printf("p3 = %d\n",p3);
printf("p4= %d\n",p4);
printf("&p = %d\n",&p);
printf("&p2= %d\n",&p2);
printf("&p3 = %d\n",&p3);
printf("&p4= %d\n",&p3);
p3=&p;
p4=&p2;
printf("&p3 = %d\n",&p3);
printf("&p4 = %d\n",&p4);
printf("p3 = %d\n",p3);
printf("p4 = %d\n",p4);
printf("*p3 = %d\n",*p3);
printf("*p4 = %d\n",*p4);
printf("**p3 = %d\n",**p3);
printf("**p4 = %d\n",**p4);

return 0;

}