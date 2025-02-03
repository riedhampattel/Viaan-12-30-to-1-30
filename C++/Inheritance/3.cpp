#include<iostream>
using namespace std;
class Father
{
	public :
		void display1()
		{
			cout<<"\nHello from father class";
		}
};
class Mother
{
	public :
		void display2()
		{
			cout<<"\nHello from mother class";
		}
};
class Viaan : public Father,public Mother
{
	
};
int main()
{
	Viaan v;
	v.display1();
	v.display2();
	return 0;
}
