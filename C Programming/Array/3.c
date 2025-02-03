#include<stdio.h>
int main()
{
	int a[5],i;
	char ch[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter any number in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEnter any character in a[%d] = ",i);
		scanf(" %c",&ch[i]);
	}
	printf("\nArray a := ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray ch = ");
	for(i=0;i<5;i++)
	{
		printf("%c ",ch[i]);
	}
	return 0;
}
