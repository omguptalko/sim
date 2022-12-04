/* Program to calculate simple interest*/
#include<stdio.h>
void main()
{
float p;
 int  r;
float t;
printf(" enter the value of principal \n");
scanf("%f",&p);
printf(" enter the value of rate \n");
scanf ("%d",&r);
printf(" enter the value of time \n");
scanf("%f",&t);
printf("simple interest= %f",(r*p*t)/100);
}
