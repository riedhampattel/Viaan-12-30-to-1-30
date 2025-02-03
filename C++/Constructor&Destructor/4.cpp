#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\nChild class constructor called";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\nGrandChild class constructor called";
		}
};
int main()
{
	GrandChild gc;
	return 0;
}
