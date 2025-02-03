//with return type with argument
#include<stdio.h>
int add(int n1,int n2);//declation of the function
int main()
{
	int num1,num2;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&num2);
	int ans = add(num1,num2);//calling of the function
	printf("\nValue of ans = %d",ans);
	return 0;
}
//definition of the function
int add(int n1,int n2)
{
	int ans;
	ans = n1+n2;
	return ans;
}
