//without return type with argument
#include<stdio.h>
void multi(int n1,int n2);
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	multi(num1,num2);
	return 0;
}
void multi(int n1,int n2)
{
	int ans;
	ans = n1*n2;
	printf("\nMultiplication is = %d",ans);
}