#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,element,index;
	cout<<"Enter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the element in a["<<i<<"] = ";
		cin>>a[i];	
	}
	cout<<"Enter the element = ";
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			index = i;
		}
	}
	for(i=index;i<size;i++)
	{
		a[i] = a[i+1];
	}
	cout<<"\nArray after deletion = ";
	for(i=0;i<size-1;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
