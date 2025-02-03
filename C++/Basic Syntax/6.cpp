#include<iostream>
using namespace std;
int main()
{
	long int term,i,sum=0,num=1;
	cout<<"Enter the term = ";
	cin>>term;//5
	for(i=1;i<=term;i++)
	{
		sum = sum + num;
		num = (num*10) + 1;
		cout<<num;
		if(i<term)
		{
			cout<<" + ";
		}
	}
	cout<<"\nAddition = "<<sum;
	return 0;
}
