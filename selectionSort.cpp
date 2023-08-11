#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,j,temp,minNo,loc;
    cout<<"Enter the range of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element at position "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        minNo=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<minNo)
            {
                minNo=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"Array elements after sorting are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}