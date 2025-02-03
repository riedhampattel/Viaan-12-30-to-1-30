//Write a c program to take one input from the user and check whether the number is pallindrome or not?
#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);//121
	int temp = num;
	while(num!=0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	if(rev==temp)
	{
		printf("\n%d is a palinfrome number",temp);
	}
	else
	{
		printf("\n%d is not a palinfrome number",temp);
	}
	return 0;
}
