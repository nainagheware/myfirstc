#include<stdio.h>
void main ()
{
int a;
printf("input time value in military time");
scanf("%d",&a);
if (a>0000 && a<1200)
    printf("Morning");
else if (a>=1200 && a<1800)
    printf("Afternoon");
else if (a>=1800 && a<2400)
    printf("Evening");
else
    printf("time out of range");
}