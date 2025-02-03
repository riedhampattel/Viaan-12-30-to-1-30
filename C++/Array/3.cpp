#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,index,element;
	cout<<"Enter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the element in a["<<i<<"] = ";
		cin>>a[i];	
	}	
	cout<<"Enter the element = ";
	cin>>element;
	cout<<"Enter the index number = ";
	cin>>index;
	
	for(i=size-1;i>=index;i--)
	{
		a[i+1] = a[i];
	}
	a[index] = element;
	
	cout<<"\nArray after insertion = ";
	for(i=0;i<=size;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
