#include<stdio.h>
struct Employees
{
	int id;
	double salary;
	char atd;
};
int main()
{
	struct Employees e1,e2;
	printf("\nEnter the id = ");
	scanf("%d",&e1.id);
	printf("\nEnter the salary = ");
	scanf("%lf",&e1.salary);
	printf("\nEnter the attendance status = ");
	scanf(" %c",&e1.atd);
	
	printf("\nId = %d",e1.id);	
	printf("\nSalary = %.lf",e1.salary);
	printf("\nAttendance = %c",e1.atd);
	
	printf("\nEnter the id = ");
	scanf("%d",&e2.id);
	printf("\nEnter the salary = ");
	scanf("%lf",&e2.salary);
	printf("\nEnter the attendance status = ");
	scanf(" %c",&e2.atd);
	
	printf("\nId = %d",e2.id);	
	printf("\nSalary = %.lf",e2.salary);
	printf("\nAttendance = %c",e2.atd);
	return 0;
}
