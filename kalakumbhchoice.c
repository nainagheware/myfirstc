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
    getchar();
    printf("enter your class:\n");
    scanf("%d ", &class );
    getchar();
    printf("enter your sec:\n");
    scanf("%c", &sec );
    getchar();
    printf("enter your age:\n");
    scanf("%d", &age );
    getchar();
    printf("Would you like to participate in kalakumbh? \n");
    scanf("%c",&choice);
    getchar();
    printf("name,")f class",class,sec,"has chosen,"choice,", to participate in kalakumbh.);
}