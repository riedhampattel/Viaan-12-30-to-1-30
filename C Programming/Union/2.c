#include<stdio.h>
struct Sum
{
	int a,b;
	char ch;	
};
int main()
{
	struct Sum u1;
	u1.a=65;
	u1.ch='Z';
	printf("\nValue of a = %d",u1.a);
	printf("\nValue of b = %d",u1.b);
	printf("\nValue of ch = %c",u1.ch);
	return 0;
}
