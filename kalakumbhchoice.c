#include<stdio.h>
void main ()
{
    char name [20];
    int age,class;
    char sec;
    char choice [3];
    printf("Enter your name: \n");
    scanf("%s", &name );
    printf("Your name:%s\n",name);
    printf("enter your class:\n");
    scanf("%d", &class );
    printf("Your class:%d\n",class);
    printf("enter your sec:\n");
    scanf("%c", &sec );
    printf("Your sec:%c\n",sec);
    printf("enter your age:\n");
    scanf("%d", &age );
    printf("Your age:%d\n",age);
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s",&choice);
   printf("Your choice:%s\n",choice);
}