#include<iostream>
using namespace std;
class Print
{
    public :
        void display();
};
void Print :: display()
{
    cout<<"\nI am a member of Print class";
}
int main()
{
    Print p;
    p.display();
    return 0;
}