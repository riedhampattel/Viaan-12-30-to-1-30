#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("first.txt","w");
	fprintf(fp1,"This is my first file");
	fclose(fp1);
	
	fp2 = fopen("second.txt","w");
	fp3 = fopen("third.txt","w");
	fprintf(fp2,"This is my second file");
	fprintf(fp3,"This is my third file");
	fclose(fp2);
	fclose(fp3);
	printf("Operation successful");
	return 0;
}
