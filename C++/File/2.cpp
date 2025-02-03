#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ofstream ---> create a new file/write a file
    ofstream MyFile("first.txt");
    int i;
    for(i=0;i<5;i++)
    {
        MyFile<<"This is a file"<<endl;
    }
    MyFile.close();
    return 0;
}