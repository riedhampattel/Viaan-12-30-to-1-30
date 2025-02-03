#include<stdio.h>
//& ---> address of
//* ---> value at
int main()
{
	int a = 10;
	int *ptr = &a;
	char ch = 'A';
	char* p = &ch; 
	
	printf("\nValue  of a = %d",a);
	printf("\nValue  of a = %d",*ptr);
	printf("\nAddress of a = %p",&a);
	printf("\nAddress of a = %p",ptr);
	
	printf("\nValue  of ch = %c",ch);
	printf("\nValue  of ch = %c",*p);
	printf("\nAddress  of ch = %p",&ch);
	printf("\nAddress  of ch = %p",p);
	return 0;
}
