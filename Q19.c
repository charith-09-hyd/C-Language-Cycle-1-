#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("ENTER a,b:   \n");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAP: a= %d \n  b= %d \n",a,b);
	temp = a;
	a = b;
	b = temp;
    printf("AFTER SWAP:  a= %d \n b= %d \n",a,b);
    
}