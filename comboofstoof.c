#include<stdio.h>
void main()
{
char a;
printf("enter a alphabet/num/special charachter");
scanf("%c",&a);
if (a>=65 && c<=90)
{
    if(c=='a' ||c=='e' ||c=='i'||c=='o'|| c=='u')
        printf("it is a vowel");
    else
        printf("it is a consonant");    
}
else if (c>=48 && c<=57)
    printf("it is a number");
else
    printf("it is a special character");
}