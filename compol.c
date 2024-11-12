#include<stdio.h>
void main ()
{
int s,c,ns;
printf("enter sales");
scanf("%d",&s);
if (s=<1000)
    printf("no commision");
else if (s<2500 && s>1000)
{
    c=(10.0/100)*s;
    ns= s+c;
    printf("commission=%d",ns);
}
else if (s>2500)
{
    c=(15.0/100)*s;
    ns= s+c;
    printf("commission=%d",ns);
}
else
    printf("error");
}