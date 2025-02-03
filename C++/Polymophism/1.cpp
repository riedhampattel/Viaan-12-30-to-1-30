#include<iostream>
using namespace std;
//compile time polymorphism
//constructor overloading
class Shape
{
	public :
		Shape(int side)
		{
			cout<<"\nArea of square = "<<side*side;
		}
		Shape(int l,int b)
		{
			cout<<"\nArea of rectangle = "<<l*b;
		}
		Shape(double radius)
		{
			cout<<"\nArea of a circle = "<<3.14*(radius*radius);
		}
		Shape(int b,double h)
		{
			cout<<"\nArea of a triangle = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1(10);
	Shape s2(10,20);
	Shape s3(5.6);
	Shape s4(10,5.25);
	return 0;
}
