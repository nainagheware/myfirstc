#include<stdio.h>
void main ()
{
int a,b;
printf(enter 2 integers);
scanf("%d%d",&a,&b);
if (a>0 && b>0)
    printf("I Quad");
else if (a<0 && b>0)
    printf("II Quad");
else if (a<0 && b<0)
    printf("III Quad");
else if (a>0 && b<0)
    printf("IV Quad");
}