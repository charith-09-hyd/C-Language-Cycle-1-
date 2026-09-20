#include<stdio.h>
#include<math.h>
void main()
{
	float P,T,R,S;
	printf("ENTER P,T,R:   \n");
	scanf("%f%f%f",&P,&T,&R);
	S = (P*T*R)/100;
	printf("SI = %.2f",S);
	
}