#include<stdio.h>
void main ()
{
int a,b,c;
printf("enter angles of tri");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c ==180)
{
    if( a==b && a==c)
        printf("it is an equilateral tri");
    else if (a==b || a==c || b==c)
        printf("it is an isosceles tri");
    else if (a!=b && a!=c && b!=c)
        printf("it is a scalene tri");
}
else
    printf("the tri is not possible");
}