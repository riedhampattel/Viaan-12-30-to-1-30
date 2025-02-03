#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	int *ptr=&arr;
	
	printf("\nAddress of arr = %p",ptr);
	for(i=0;i<5;i++)
	{
		printf("\nAddress of arr[%d] = %p",i,&arr[i]);
		printf("\nValue of arr[%d] = %d",i,*(ptr+i));
	}
	return 0;
}
