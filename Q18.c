#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS:   \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("GREATEST NUMBER = %d ",(a>b)?((a>c)?a:c):((b>c)?b:c));
}                                      