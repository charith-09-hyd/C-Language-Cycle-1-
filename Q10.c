#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("ENTER no.of DAYS:   ");
	scanf("%f",&a);
	b = a/365;
	c = a/7;
	d = a/a;
	printf("%f days is equal to\n %f years\n %f weeks\n %f days",a,b,c,d);
	
	
}