#include<stdio.h>
int main()
{
	char ch[100];
	printf("\nEnter the string = ");
	fgets(ch,100,stdin);
	printf("\n%s",ch);
	return 0;
}
