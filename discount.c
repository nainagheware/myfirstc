#include<stdio.h>
void main ()
{
    int sp, mp;
    float d;
    printf("enter price \n");
    scanf("%d",&mp);
    d=5;
    sp=(100-(d/100)*mp);
    printf("dicsount price =%d",sp);
}