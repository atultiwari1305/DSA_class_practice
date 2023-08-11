#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,j,temp;
    cout<<"Enter the range of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element at position "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"The array elements after sorting are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}