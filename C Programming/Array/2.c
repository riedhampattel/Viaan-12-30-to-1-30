#include<stdio.h>
int main()
{
	int a[10];
	char b[10];
	printf("\nEnter the element = ");
	scanf("%d",&a[0]);
	printf("\nEnter the element = ");
	scanf("%d",&a[1]);
	printf("\nEnter the element = ");
	scanf("%d",&a[2]);
	printf("\nEnter the element = ");
	scanf("%d",&a[3]);
	printf("\nEnter the element = ");
	scanf("%d",&a[4]);
	
	printf("\nEnter the element = ");
	scanf(" %c",&b[0]);
	printf("\nEnter the element = ");
	scanf(" %c",&b[1]);
	printf("\nEnter the element = ");
	scanf(" %c",&b[2]);
	printf("\nEnter the element = ");
	scanf(" %c",&b[3]);
	printf("\nEnter the element = ");
	scanf(" %c",&b[4]);
	
	printf("\nArray of integer := ");
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d ",a[2]);
	printf("%d ",a[3]);
	printf("%d ",a[4]);
	
	printf("\nArray of Character := ");
	printf("%c ",b[0]);
	printf("%c ",b[1]);
	printf("%c ",b[2]);
	printf("%c ",b[3]);
	printf("%c ",b[4]);
	return 0;
}
