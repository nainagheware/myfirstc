#include<stdio.h>
void main ()
{
int x,y,z;
printf("Enter the value of x,y between 1-10\n");
scanf("%d%d",&x,&y);
for(x=1;x<=10;x++)
{
   for(y=1;y<=10;y++)
   {
     z= 3*x*x+y*y;
   }
}
printf("\nz=%d",z);
}