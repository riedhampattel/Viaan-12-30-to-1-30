#include<iostream>
using namespace std;
//compile time polymophism
//function overloading
class Animal
{
	public :
		void animal(string name,int age)
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
		}
		void animal(int age,string name)
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
		}
		void animal(string name)
		{
			cout<<"\nName = "<<name;
		}
		void animal(string name,double price)
		{
			cout<<"\nName = "<<name;
			cout<<"\nprice = "<<price;
		}
};
int main()
{
	Animal a;
	a.animal("COW",25);
	a.animal(10,"DOG");
	a.animal("HORSE");
	a.animal("CAT",45000.0);
	return 0;
}
