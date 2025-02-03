#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
	public :
		Demo(int i,string n)
		{
			id = i;
			name = n;
		}
		Demo(Demo &obj)
		{
			cout<<"\nCopy constructor called";
			id = obj.id;
			name = obj.name;
		}
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name<<endl;
		}
};
int main()
{
	Demo d1(101,"Rahul");
	Demo d2(102,"Viaan");
	Demo d3=d1;//copy constructure
	Demo d4(d2);//copy constructure
	
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	return 0;
}
