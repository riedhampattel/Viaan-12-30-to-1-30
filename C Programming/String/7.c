#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int length;
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	printf("\nOriginal string 1 = %s",str1);
	printf("\nOriginal string 2 = %s",str2);
	
	length = strlen(str1);
	
	printf("\nLength of str1 = %d",length);
	printf("\nLength of str2 = %d",strlen(str2));
	
	return 0;
}
