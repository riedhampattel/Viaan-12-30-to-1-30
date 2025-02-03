#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//10
	
	for(i=start;i<=end;i++)
	{
		printf("\n%d",i);
	}
	return 0;
}
