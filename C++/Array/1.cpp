#include<iostream>
using namespace std;
int main()
{
    int size1,size2,a[100],b[100],i,c[200];
    cout<<"Enter the size of array 1 = ";
    cin>>size1;
    for(i=0;i<size1;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the size of array 2 = ";
    cin>>size2;
    for(i=0;i<size2;i++)
    {
        cout<<"\nEnter the element in b["<<i<<"] = ";
        cin>>b[i];
    }
    for(i=0;i<size1;i++)
    {
        c[i] = a[i];
    }
    for(i=0;i<size2;i++)
    {
        c[size1] = b[i];
        size1++;
    }
    cout<<"\nMerged array = ";
    for(i=0;i<size1;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}