//Write a c program to take one input from the user and check whether the number is Armstrong or not?
#include<stdio.h>
int main()
{
	int num,digit=0,i,rem,sum=0;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);//153
	int temp = num;
	int copy = num;
	
	while(num!=0)
	{
		num = num/10;
		digit++;//3
	}
	for(i=1;i<=digit;i++)
	{
		rem = temp%10;
		int power = pow(rem,digit);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}
