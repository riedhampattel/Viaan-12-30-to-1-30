#include<stdio.h>
struct Car
{
	int mnum;
	char colour[100];
	double price;	
};
int main()
{
	int size,i;
	struct Car c[100];
	printf("\nEnter the size = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the model number = ");
		scanf("%d",&c[i].mnum);
		printf("\nEnter the colour = ");
		scanf("%s",&c[i].colour);
		printf("\nEnter the price = ");
		scanf("%lf",&c[i].price);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\nModel number = %d",c[i].mnum);
		printf("\nColour = %s",c[i].colour);
		printf("\nPrice = %.lf",c[i].price);
		printf("\n");
	}
	return 0;
}
