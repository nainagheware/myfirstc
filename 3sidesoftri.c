#include<stdio.h>
void main()
{
int a,b,a;
printf("enter the 3 side of the triangle");
scanf("%d%d%d",&a,&b,&c);
if (a!=b && a!=c && b!=c)
    printf("it is a scalene triangle");
else if(a==b || a==c || b==c)
    printf("itis an isosceles triangle");
else (a==b && a==c)
    printf("it is a scalene triangle");
}