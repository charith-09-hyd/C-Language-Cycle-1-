#include<stdio.h>
void main()
{
	int a,b;
	printf("ENTER a,b:    \n");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAP\n a =%d   b =%d\n",a,b);
	a = b;
	b = a;
	printf("AFTER SWAP\n a= %d    b=%d\n",a,b);
	
}