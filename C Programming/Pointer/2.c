#include<stdio.h>
int b = 10;//global scope ---> extern storage class
void display()
{
	static int i=0;//local scope ---> static storage class
	i++;
	printf("\n%d",i);
}
int main()
{
	int a = 20;//local scope ---> auto storage class	
	display();
	display();
	display();
	return 0;
}
