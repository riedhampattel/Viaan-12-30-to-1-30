#include<iostream>
using namespace std;
template <typename T>
void swapping(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    cout<<"\nThe value of a before swapping = "<<a;
    cout<<"\nThe value of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nThe value of a after swapping = "<<a;
    cout<<"\nThe value of b after swapping = "<<b;

    char x = 'A';
    char y = 'B';

    cout<<"\nThe value of x before swapping = "<<x;
    cout<<"\nThe value of y before swapping = "<<y;
    swapping(x,y);
    cout<<"\nThe value of x after swapping = "<<x;
    cout<<"\nThe value of y after swapping = "<<y;

    string s1 = "Hi";
    string s2 = "Bye";
    
    cout<<"\nThe value of s1 before swapping = "<<s1;
    cout<<"\nThe value of s2 before swapping = "<<s2;
    swapping(s1,s2);
    cout<<"\nThe value of s1 after swapping = "<<s1;
    cout<<"\nThe value of s2 after swapping = "<<s2;
    return 0;
}