#include<iostream>
using namespace std;
class Shape//abstract
{
    public :
        virtual void draw()//virtual function
        {
            cout<<"\nThis is a shape";
        }
};
class Circle : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is a circle class";
        }
};
int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->draw();
    return 0;
}