#include<stdio.h>
int main()
{
	int a[100],i,size;
	char ch[100];
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter any number in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\nEnter any character in a[%d] = ",i);
		scanf(" %c",&ch[i]);
	}
	printf("\nArray a := ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray ch = ");
	for(i=0;i<size;i++)
	{
		printf("%c ",ch[i]);
	}
	return 0;
}
