#include<iostream>
using namespace std;
class Demo
{
    private :
        int x,y;
    public :
        Demo(int i,int j)
        {
            x = i;
            y = j; 
        }
        Demo()
        {
            x = 0;
            y = 0;
        }
        Demo operator+(Demo &obj)
        {
            Demo temp;
            temp.x = x + obj.x;
            temp.y = y + obj.y;
            return temp;
        }
        void display()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of y = "<<y<<endl;
        }
};
int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;

    Demo d1(10,20);
    Demo d2(30,40);
    Demo d3;

    Demo d4 = d1 + d2;

    d1.display();
    d2.display();
    d3.display();
    d4.display();
	return 0;
}