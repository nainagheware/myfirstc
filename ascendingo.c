#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3nos");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
    if(b>c)
        printf("&d",&c"<&d",&b"<&d",&a);
    else
        printf("&d",&b"<&d",&c"<&d",&a);
}
else if (b>c && b>a)
{
    if(a>c)
        printf("&d",&c"<&d",&a"<&d",&b);
    else
        printf("&d",&a"<&d",&c"<&d",&b);
}
else if (c>b && c>a)
{
    if(b>a)
        printf("&d",&a"<&d",&b"<&d",&c);
    else
        printf("&d",&b"<&d",&a"<&d",&c);
}
else
    printf("error");
}