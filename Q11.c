#include<stdio.h>
#include<math.h>
void main()

{
	int a,b,c;
	char choice;
	while(1){
	
	printf("\n enter BASE and POWER values\n");
	scanf("%d%d",&a,&b);
	c = pow(a,b);
	printf("%d^%d = %d",a,b,c);
	
	scanf("%c",&choice); 
	if( choice=='n'|| choice=='N'){
		break;
	}
}
  printf("\nTHANKYOU\n");
	
}