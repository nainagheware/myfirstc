#include<stdio.h>
void main ()
{
    char name [20];
    int age;
    int class;
    char sec;
    char choice [3];
    printf("Enter your name: \n");
    scanf("%s", &name );
    printf("enter your class:\n");
    scanf("%d ", &class );
    printf("enter your sec:\n");
    scanf("%s", &sec );
    getchar();
    printf("enter your age:\n");
    scanf("%d", &age );
    getchar();
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%s",&choice);
    getchar();
    printf("name," of class",class,sec,"has chosen,"choice,", to participate in kalakumbh.);
}