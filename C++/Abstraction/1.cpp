#include<iostream>
using namespace std;
class Demo
{
    private :
        int z = 30;
        string s3 = "Private";
    protected :
        int y = 20;
        string s2 = "Protected";
    public :
        int x = 10;
        string s1 = "Public";
        void display()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of s1 = "<<s1;
        }
};
class Derive:public Demo
{
    public :
        void display()
        {
            cout<<"\nValue of y = "<<y;
            cout<<"\nValue of s2 = "<<s2;
        }
};
int main()
{
    Demo d;
    //private ---> within the class
    // cout<<"\nValue of z = "<<d.z;
    // cout<<"\nValue of s3 = "<<d.s3;

    // protected ---> within the class or in derived class
    // cout<<"\nValue of y = "<<d.y;
    // cout<<"\nValue of s2 = "<<d.s2;

    d.display();

    Derive d1;
    d1.display();

    // protected ---> within the class or in derived class
    // cout<<"\nValue of y = "<<d1.y;
    // cout<<"\nValue of s2 = "<<d1.s2;

    cout<<"\nValue of x = "<<d.x;
    cout<<"\nValue of s1 = "<<d.s1;
    return 0;
}