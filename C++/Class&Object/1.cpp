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
	s1.id = 101;
	s1.name = "Rahul";
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name;
	
	s2.id = 102;
	s2.name = "Rohan";
	cout<<"\nId = "<<s2.id;
	cout<<"\nName = "<<s2.name;
	return 0;
}
