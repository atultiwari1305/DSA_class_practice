#include<iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    cout<<"hello";
    cout<<"Enter the range of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Entered elements are: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}