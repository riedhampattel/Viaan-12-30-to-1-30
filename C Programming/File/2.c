#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","a");
	fprintf(fp1,"\nThis is my second line");
	fprintf(fp1,"\nThis is my third line");
	fprintf(fp1,"\nThis is my fourth line");
	fprintf(fp1,"\nThis is my fifth line");
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
