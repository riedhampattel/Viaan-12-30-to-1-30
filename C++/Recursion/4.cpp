#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
	if(size!=0)
	{
		return arr[size-1] + sumarr(arr,size-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a[100],size,i;
	cout<<"Enter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	int result = sumarr(a,size);
	cout<<"\nThe addition is = "<<result;
	return 0;
}
