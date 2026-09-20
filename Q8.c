#include<stdio.h>
void main()
{
	float a,b;
	printf("ENTER TEMPERATURE IN Celsius");
	scanf("%f",&a);
	
	b = 32 + (9*a/5);
	printf("THEREFORE %f C is %f F",a,b);
	
	
}