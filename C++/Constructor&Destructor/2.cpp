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
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name<<endl;
		}
};
int main()
{
	Demo d1(101,"Viaan"),d2(102,"Mahesh");
	d1.display();
	d2.display();
	return 0;
}
