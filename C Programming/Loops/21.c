/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j,k;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	int spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=spc;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
		spc--;
	}
	return 0;
}
