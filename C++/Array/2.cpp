#include<iostream>
using namespace std;
int main()
{
    int size,a[100],b[100],i;
    cout<<"Enter the size of array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nCopied array = ";
    for(i=0;i<size;i++)
    {
        b[i] = a[i];
        cout<<b[i]<<" ";
    }
    return 0;
}