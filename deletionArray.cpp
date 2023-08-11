#include<iostream>
using namespace std;
int main()
{
    int a[10], b[10], i, j=0, n, num;
    cout<<"Enter the range of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element at position "<<i<<": ";
        cin>>a[i];
    }
    cout<<"Enter the number to be deleted: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]!=num)
        {
            b[j++]=a[i];
        }
    }
    if(j==n)
    {
        cout<<"Number not found!";
    }
    else
    {
        cout<<"Number found and has been successfully deleted!"<<endl;
        cout<<"Edited array is: ";
        for(i=0;i<n-1;i++)
        {
            cout<<b[i]<<" ";
        }
    }
    return 0;
}