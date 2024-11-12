#include<stdio.h>
void main ()
{
int a,b,c,d,e,p;
printf("enter marks of 5 subs");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
p= (a+b+c+d+e/500)*100;
printf("%d",p);
if (p>80)
    printf("Distinction");
else if (p>=60 && p<=80)
    printf("I class");
else if (p>=55 && p<=60)
    printf("II class");
else if (p>=30 && p<=55)
    printf("Passed");
else if (p<30)
    printf("Fail(work really hard)");
}