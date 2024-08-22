#include<stdio.h>
void main ()
{
    char name [20];
    int name, class, sec, age, k;
    printf("Enter your name: \n");
    scanf("%s\n", &name );
    printf("enter your class:\n");
    scanf("%d \n", &class );
    printf("enter your sec:\n");
    scanf("%c \n", &sec );
    printf("enter your age:\n");
    scanf("%d \n", &age );
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s\n",&k);
    printf("Name:%s\n",name);
    printf("Class;%d\n",class);
    printf("Sec:%c\n",sec);
    printf("Age:%d\n",age");
    printf("Has chosen to participate in kalakumbh:%s\n",k);
    
}