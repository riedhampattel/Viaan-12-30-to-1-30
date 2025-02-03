#include<iostream>
using namespace std;
class GrandParent
{
	public :
		void display1()
		{
			cout<<"\nHello from Grand Parent class";
		}
};
class Father : public GrandParent
{
	public :
		void display2()
		{
			cout<<"\nHello from Father class";
		}
};
class Uncle : public GrandParent
{
	public :
		void display3()
		{
			cout<<"\nHello from Uncle class";
		}
};
class Viaan : public Father
{
};
class Cousin : public Uncle
{
};
int main()
{
	Father f;
	f.display1();
	f.display2();
	
	Uncle u;
	u.display1();
	u.display3();
	
	Viaan v;
	v.display1();
	v.display2();
	
	Cousin c;
	c.display1();
	c.display3();
	return 0;
}
