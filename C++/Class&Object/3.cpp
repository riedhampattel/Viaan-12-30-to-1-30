#include<iostream>
using namespace std;
class Student
{
	private :
		int id;
		string name;
	public :
		void set(int i,string s)
		{
			id = i;
			name = s;
		}
		void get()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
		}
};
int main()
{
	Student s1,s2;
	s1.set(101,"Raj");
	s1.get();
	s2.set(102,"Rahul");
	s2.get();
	return 0;
}
