#include<stdio.h>
#include<stdio.h>
void main()
{
	float a,b;
	char choice;
	while(1){
	
	printf("\nENTER VALUE 'a'\n");
	scanf("%f",&a);
	b = sqrt(a);
	printf("\nthe SQUARE ROOT of %.1f      is      %.1f\n",a,b);
	
	scanf("%c",&choice);
	if(choice=='n' || choice=='N'){
		break;
	}
}
printf("\nLOOP BROKEN THANKYOU\n");
	
	
}