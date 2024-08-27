#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter 3nos");
    scanf("%d%d%d", &a, &b, &c);
    (a > b && a > c) ? printf("a is larger\n") : ((b > c && b > a) ? printf("b is larger\n") : ((c > a && c > b) ? printf("c is larger\n") : ((a == b && a == c) ? printf("they are equal\n") : printf("error\n"))));
}
