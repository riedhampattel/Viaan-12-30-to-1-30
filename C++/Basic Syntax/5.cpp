#include<iostream>
using namespace std;
int main()
{
	int amt;//4672
	cout<<"Enter the amount = ";
	cin>>amt;
	cout<<"500 ---> "<<amt/500<<endl;//9
	amt = amt%500;//172
	
	cout<<"200 ---> "<<amt/200<<endl;//0
	amt = amt%200;//172
	
	cout<<"100 ---> "<<amt/100<<endl;//1
	amt = amt%100;//72
	
	cout<<"50 ---> "<<amt/50<<endl;//1
	amt = amt%50;//22
	
	cout<<"20 ---> "<<amt/20<<endl;//1
	amt = amt%20;//2
	
	cout<<"10 ---> "<<amt/10<<endl;//0
	amt = amt%10;//2
	
	cout<<"5 ---> "<<amt/5<<endl;//0
	amt = amt%5;//2
	
	cout<<"2 ---> "<<amt/2<<endl;//1
	amt = amt%2;//0
	
	cout<<"1 ---> "<<amt;
	return 0;
}
