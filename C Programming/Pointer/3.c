#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr=&arr;
	
	printf("\nAddress of arr = %p",ptr);
	printf("\nAddress of a[0] = %p",&arr[0]);
	printf("\nAddress of a[1] = %p",&arr[1]);
	printf("\nAddress of a[2] = %p",&arr[2]);
	printf("\nAddress of a[3] = %p",&arr[3]);
	printf("\nAddress of a[4] = %p",&arr[4]);
	return 0;
}
