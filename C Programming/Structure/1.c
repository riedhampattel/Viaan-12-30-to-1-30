#include<stdio.h>
struct Student
{
	int roll;
	char grade;
	float per;
};
int main()
{
	struct Student s1;
	s1.roll=101;
	s1.per=98.56;
	s1.grade='A';
	
	printf("\nId = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.per);
	printf("\nGrade = %c",s1.grade);
	return 0;
}
