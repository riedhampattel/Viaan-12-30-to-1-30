//with return type without argument
#include<stdio.h>
float div();//declaration of the function
int main()
{
	float ans = div();//calling of the function
	printf("\nDivision is = %.2f",ans);
	return 0;
}
//definition of the function
float div()
{
	int n1,n2;
	float ans;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	ans = (float)n1/(float)n2;
	return ans;
}
