#include<stdio.h>
void main ()
{
int x,y,z,i;
printf("Enter the value of x,y between 1-10\n");
scanf("%d%d",&x,&y);
for(i=1;i<=10;i++)
{
    z= 3*x*x+y*y;
}
printf("\nz=%d",z);
}