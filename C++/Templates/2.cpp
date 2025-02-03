#include<iostream>
using namespace std;
template <typename T,int size>
void sorting(T (&arr)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int i;
    int a[5] = {32,45,2,3,90};
    cout<<"\nArray before sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sorting(a);
    cout<<"\nArray after sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    char ch[5] = {'Z','Q','E','Y','D'};
    cout<<"\nArray before sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }
    sorting(ch);
    cout<<"\nArray after sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }   

    float f[5] = {90.56,2.54,0.56,45.85,32.67}; 
    cout<<"\nArray before sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<" ";
    }
    sorting(f);
    cout<<"\nArray after sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<" ";
    }

    string s[5] = {"Hi","Viaan","TOPS","Bye","No"}; 
    cout<<"\nArray before sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<" ";
    }
    sorting(s);
    cout<<"\nArray after sorting = ";
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}