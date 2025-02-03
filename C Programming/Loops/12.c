//Write a c program to take 2 numbers from the user and print all the prime numbers and not prime numbers between them.(Use switch case)
#include<stdio.h>
int main()
{
	int start,end,choice,i,j,num,count;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);
	printf("\nEnter the ending number = ");
	scanf("%d",&end);
	
	printf("\n1.Prime numbers");
	printf("\n2.Non prime numbers");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=start;i<=end;i++)
			{
				num = i;
				count=0;
				for(j=2;j<num;j++)
				{
					if(num%j==0)
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("%d ",num);
				}
			}
		break;
		case 2:
			for(i=start;i<=end;i++)
			{
				num = i;
				count=0;
				for(j=2;j<num;j++)
				{
					if(num%j==0)
					{
						count++;
					}
				}
				if(count!=0)
				{
					printf("%d ",num);
				}
			}
		break;
	}
	return 0;
}
