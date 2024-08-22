#include<stdio.h>
void main ()
{
    char name [20];
    int class, age;
    char sec;
    char k [4];
    printf("Enter your name: \n");
    scanf("%s", &name );
    getchar();
    printf("enter your class:\n");
    scanf("%d ", &class );
    printf("enter your sec:\n");
    scanf("%c", &sec );
    getchar();
    printf("enter your age:\n");
    scanf("%d", &age );
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s",&k);
    getchar();
    printf("Name:%s\n",name);
    printf("Class;%d\n",class);
    printf("Sec:%c\n",sec);
    printf("Age:%d\n",age);
    printf("Has chosen to participate in kalakumbh:%s\n",k);
}