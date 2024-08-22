#include<stdio.h>
void main ()
{
    char name [20];
    int n, class, sec, age, k;
    printf("Enter your name: \n");
    scanf("%s\n", &n );
    printf("enter your class:\n");
    scanf("%d \n", &class );
    printf("enter your sec:\n");
    scanf("%c \n", &sec );
    printf("enter your age:\n");
    scanf("%d \n", &age );
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s\n",&k);
    printf("Name:%s\n",n);
    printf("Class;%d\n",class);
    printf("Sec:%c\n",sec);
    printf("Age:%d\n",age);
    printf("Has chosen to participate in kalakumbh:%s\n",k);
}