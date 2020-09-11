#include<stdio.h> 
  
struct Point 
{ 
   int x, y; 
}; 
  
int main() 
{ 
   struct Point p1 = {0, 1}; 
  p1.x=p1.y;
  p1.y=p1.y+40;
  p1.y=0;
   // Accessing members of point p1 
   //p1.x = 20; 
   printf ("x = %d, y = %d", p1.x, p1.y); 
  
   return 0; 
}