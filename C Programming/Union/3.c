#include<stdio.h>
struct Demo1
{
	int a,b;
	char ch;	
};
union Demo2
{
	int a,b;
	char ch;
};
int main()
{
	struct Demo1 s1;
	union Demo2 u1;
	s1.a = 65;
	u1.a = 66;
	
	printf("\nValue of a in structure = %d",s1.a);
	printf("\nValue of b in structure = %d",s1.b);
	printf("\nValue of ch in structure = %c",s1.ch);
	printf("\n");
	
	printf("\nValue of a in union = %d",u1.a);
	printf("\nValue of b in union = %d",u1.b);
	printf("\nValue of ch in union = %c",u1.ch);
	printf("\n");
	return 0;
}
