#include<stdio.h>
struct Student
{
	int id;
	char name[100];
	float cgpa;
};
int main()
{
	FILE *fp1;
	struct Student s[50];
	int size,i;
	printf("\nEnter the number of student = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the id = ");
		scanf("%d",&s[i].id);
		printf("\nEnter the name = ");
		scanf("%s",&s[i].name);
		printf("\nEnter the cgpa = ");
		scanf("%f",&s[i].cgpa);
	}
	
	fp1 = fopen("student.txt","a");
	for(i=0;i<size;i++)
	{
		fprintf(fp1,"\nId = %d",s[i].id);
		fprintf(fp1,"\nName = %s",s[i].name);
		fprintf(fp1,"\nCGPA = %.1f",s[i].cgpa);
		fprintf(fp1,"\n");
	}
	fclose(fp1);
	printf("\nData written in the file");
	return 0;	
}
