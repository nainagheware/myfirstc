#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3nos");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
    if(b>c)
        printf("&d<&d<&d",c,b,a);
    else
        printf("&d<&d<&d",b,c,a);
}
else if (b>c && b>a)
{
    if(a>c)
        printf("&d<&d<&d",c,a,b);
    else
        printf("&d<&d<&d",a,c,b);
}
else if (c>b && c>a)
{
    if(b>a)
        printf("&d<&d<&d",a,b,c);
    else
        printf("&d<&d<&d",b,a,c);
}
else
    printf("error");
}