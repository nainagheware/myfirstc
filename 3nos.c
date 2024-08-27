#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("enter 3nos");
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c ? printf("a is larger") : b>c && b>a? : printf("b is larger:") ; c>a && c>b? : printf("c is larger") : a==b && a==c :printf("they are equal") : printf("error");
}