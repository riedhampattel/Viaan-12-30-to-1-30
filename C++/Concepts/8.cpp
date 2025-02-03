#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void draw() = 0;//pure virtual function
};
class Circle : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is a circle";
        }
};
class Square : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is a square";
        }
};
int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->draw();
    Square sq;
    s = &sq;
    s->draw();
    return 0;
}