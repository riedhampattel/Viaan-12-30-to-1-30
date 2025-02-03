#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";	
		}	
};
class Saniya : public Parent
{
};
class Viaan : public Parent
{
};
int main()
{
	Saniya s;
	s.display();
	Viaan v;
	v.display();
	return 0;
}
