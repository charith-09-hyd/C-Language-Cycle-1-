#include<stdio.h>
void main()
{
	float a;
	int b;
	char choice;
	while(1){
		printf("\nENTER a = \n");
		scanf("%f",&a);
		b = ceil(a);
		printf(" CEIL(%f) = %d",a,b);
		scanf("%c",&choice);
		if(choice == 'n' || choice == 'N'){
			break;
		}
		
	}
	printf("\n  THANK YOU..... BREAK \n ");
}