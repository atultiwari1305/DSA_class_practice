#include<iostream>
using namespace std;
int main()
{
    int a[10], i, n, num, loc;
    cout<<"Enter the range of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element at position "<<i<<": ";
        cin>>a[i];
    }
    cout<<"Enter the number you want to enter and its location: ";
    cin>>num;
    cin>>loc;
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=num;
    cout<<"Array after insertion is: ";
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}