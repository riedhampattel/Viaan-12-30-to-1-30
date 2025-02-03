#include<iostream>
using namespace std;
//run time polymorphism
//function overriding
class GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Grand Parent";
        }
};
class Parent : public GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent";
        }
};
class Viaan : public Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Viaan";
        }
};
int main()
{
    Parent p;
    p.display();
    Viaan v;
    v.display();
	return 0;
}