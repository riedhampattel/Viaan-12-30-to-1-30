#include<stdio.h>
int main()
{
	int a,b;
	float ans;
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of b = ");
	scanf("%d",&b);
	if(b==0)
	{
		printf("\nNumber can not divide by zero");
	}
	else
	{
		ans = (float)a/(float)b;	
		printf("\nAnswer is = %.2f",ans);
	}
	return 0;
}
