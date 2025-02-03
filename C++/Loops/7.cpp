/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,row;
	start : 
	cout<<"\nEnter any odd number here = ";
	cin>>row;
	if(row%2!=0)
	{
		int t1 = (row/2) + 1;
		int spc = t1-1;
		for(i=1;i<=t1;i++)
		{
			for(j=1;j<=spc;j++)
			{
				cout<<" ";
			}
			for(k=1;k<=i;k++)
			{
				cout<<"* ";
			}
			cout<<"\n";
			spc--;
		}
		int t2 = t1-1;
		int star = t2;
		for(i=1;i<=t2;i++)
		{
			for(j=1;j<=i;j++)
			{
				cout<<" ";
			}
			for(k=1;k<=star;k++)
			{
				cout<<"* ";
			}
			cout<<"\n";
			star--;
		}
	}
	else
	{
		cout<<"\nYou have entered even number please enter odd numbers only!";
		goto start;
	}
	return 0;
}
