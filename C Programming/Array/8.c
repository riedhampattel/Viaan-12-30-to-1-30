//Write a c program to take size of an array and elements from the user and sort in ascending and descending order
#include<stdio.h>
int main()
{
	int size,a[100],i,j,temp;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nAscending ordered array = ");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nDescending ordered array = ");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
