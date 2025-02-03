#include<stdio.h>
int main()
{
	int a=10,b;
	b=a;
	//b ---> Lvalue ---> value to be assigned in this
	//a ---> Rvalue ---> value to be assigned from this
	printf("\nValue of a = %d",a);
	printf("\nValue of b = %d",b);
	return 0;
}
