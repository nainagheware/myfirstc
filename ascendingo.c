#include<stdio.h>
void ()
{
int a,b,c;
printf("enter 3nos");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
    if(b>c)
        printf("c<b<a");
    else
        printf("b<c<a");
}
else if (b>c && b>a)
{
    if(a>c)
        printf("c<a<b");
    else
        printf("a<c<b");
}
else if (c>b && c>a)
{
    if(b>a)
        printf("a<b<c");
    else
        printf("b<a<c");
}
else
    printf("error");
}