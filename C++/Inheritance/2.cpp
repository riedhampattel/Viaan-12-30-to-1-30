#include<iostream>
using namespace std;
class GreatGrandParent
{
	public :
		void display1()
		{
			cout<<"\nHello from Great Grand Parent class";	
		}	
};
class GrandParent : public GreatGrandParent
{
	public :
		void display2()
		{
			cout<<"\nHello from Grand Parent class";	
		}	
};
class Parent : public GrandParent
{
	public :
		void display3()
		{
			cout<<"\nHello from Parent class";	
		}	
};
class Viaan : public Parent
{
	
};
int main()
{
	GreatGrandParent ggp;
	ggp.display1();
	
	GrandParent gp;
	gp.display1();
	gp.display2();
	
	Parent p;
	p.display1();
	p.display2();
	p.display3();
	
	Viaan v;
	v.display1();
	v.display2();
	v.display3();
	return 0;
}
