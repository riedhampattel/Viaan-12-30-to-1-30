#include<iostream>
using namespace std;
int a = 20;//global scope
int main()
{
    int a = 10;//local scope
    cout<<"\nValue of a = "<<a;
    cout<<"\nValue of global a = "<<::a;
    return 0;
}