#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
