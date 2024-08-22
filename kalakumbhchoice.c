#include<stdio.h>
void main ()
{
    char name [20];
    int class, age;
    char sec;
    char k [4];
    printf("Enter your name: \n");
    scanf("%s\n", &name );
    getchar();
    printf("enter your class:\n");
    scanf("%d \n", &class );
    getchar();
    printf("enter your sec:\n");
    scanf("%c \n", &sec );
    getchar();
    printf("enter your age:\n");
    scanf("%d \n", &age );
    getchar();
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s\n",&k);
    getchar();
    printf("Name:%s\n",name);
    printf("Class;%d\n",class);
    printf("Sec:%c\n",sec);
    printf("Age:%d\n",age);
    printf("Has chosen to participate in kalakumbh:%s\n",k);
}