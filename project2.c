#include<stdio.h>
void main ()
{
int k,a;
char choice;
printf("\tBOTANICAL GARDENS\n");
printf("\tLALBAGH\n");
printf("Timings: 9am to 9pm\n\n");
printf("TICKETS\n\n");
printf("KIDS(less than 13)--> Rs40\n");
printf("ADULTS(more than 13)--> Rs100\n");
printf("additional cameras--> +50\n");
printf("VIDEO--> +60\n");
printf("NRI --> +70\n\n");

printf("No of kids-->\n");
scanf("%d\n",&k);
printf("No of kids -->%d\n",k);
printf("No of adults-->\n");
scanf("%d\n", &a);
printf("No of adults -->%d\n",a);
printf("Cameras(Y/N)->\n");
scanf("%c\n", &choice);
getchar();
printf("Video(Y/N)->\n");
scanf("%c\n", &choice);
getchar();
printf("NRI(Y/N)->\n");
scanf("%c\n", &choice);
getchar();

}