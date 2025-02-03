#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;	
};
int main()
{
	int a = 10;
	Student s1,s2;
	cout<<"Enter the id = ";
	cin>>s1.id;
	cout<<"Enter the name = ";
	cin>>s1.name;
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name;
	
	cout<<"\nEnter the id = ";
	cin>>s2.id;
	cout<<"Enter the name = ";
	cin>>s2.name;
	cout<<"\nId = "<<s2.id;
	cout<<"\nName = "<<s2.name;
	return 0;
}
