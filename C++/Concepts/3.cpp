#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Grand Parent class";
        }
};
class Parent1 : virtual public GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from Parent1 class";
        }
};
class Parent2 : virtual public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Parent2 class";
        }
};
class Child : public Parent1,public Parent2
{
    public :
        void displaychild()
        {
            cout<<"\nHello from Child class";
        }
};
int main()
{
    Child c;
    c.display();
    return 0;
}