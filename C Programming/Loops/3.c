#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//10
	
	i=start;
	while(i<=end)
	{
		printf("\n%d",i);
		i++;
	}
	return 0;
}
