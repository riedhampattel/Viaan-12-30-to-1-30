#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//10
	
	i=start;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=end);
	return 0;
}
