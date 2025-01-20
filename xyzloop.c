#include<stdio.h>
void main ()
{
int x,y,z;
for(x=1,y=1;x<=10 && y<=10;x++,y++)
{
  z=3*x*x+y*y;
  printf("\n%d",z);
}
}