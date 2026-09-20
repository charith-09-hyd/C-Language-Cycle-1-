#include<stdio.h>
void main()
{
	float a,b,c;
	printf("ENTER VALUE in(cm):  \n");
	scanf("%f",&a);
	b = a/100000;
	c = a/100;
	printf("IN (Km) = %.2f  \n  In (m) = %.2f",b,c);
}