#include<stdio.h>
struct Point
{
	int x,y,z;
}p1,p2;
int main(void)
{
  struct Point p1={.x=2,.z=3,.y=0};
   struct Point p2={};
   printf("p1.x = %d , p1.y = %d , p1.z = %d \n",p1.x,p1.y,p1.z);
    printf("p2.x = %d , p2.y = %d , p2.z = %d",p2.x,p2.y,p2.z);
}