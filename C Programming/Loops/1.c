#include<stdio.h>
int main()
{
	int i;
	printf("For loop := ");
	for(i=1;i<=5;i++)
	{
		printf("\nTOPS Technologies");
	}
	
	printf("\n\nWhile loop := ");
	i=1;
	while(i<=5)
	{
		printf("\nTOPS Technologies");
		i++;
	}
	
	printf("\n\ndo while loop := ");
	i=1;
	do
	{
		printf("\nTOPS Technologies");
		i++;
	}while(i<=5);
	return 0;
}
