#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,x,y,z,A,l;
	
	printf(" ENTER THE MAXIMUM MARKS OF EACH SUBJECT:   \nENTER YOUR MARKS:    \n");
	
	scanf("%f%f%f%f%f%f",&A,&a,&b,&c,&d,&e);
    l = A;
	x = a+b+c+d+e;
	y = x/5;
	z = (x*100)/(5*l);
	printf("TOTAL =%f\n AVERAGE =%f\n PERCENTAGE =%.2f\n",x,y,z);	
}