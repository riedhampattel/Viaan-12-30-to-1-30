#include<stdio.h>
int static a =10;//global scope
int main()
{
	int a=10,b=20;//local scope
	printf("Value of a = %d",a);
	printf("\nValue of b = %d",b);
	return 0;
}
