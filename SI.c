#include<stdio.h>
void main ()
{
    int p, r, t, si;
    printf("enter principle,rate and no of years\n");
    scanf("%d%d%d", &p, &r, &t);
    si =p*t*r/100;
    printf("Interest =%d",si);
}