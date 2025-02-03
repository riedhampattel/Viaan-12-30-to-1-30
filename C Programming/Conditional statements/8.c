#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is the even number",num);
	}
	else
	{
		printf("\n%d is the odd number",num);
	}
	return 0;
}
