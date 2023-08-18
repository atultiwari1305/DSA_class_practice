//wap to insert element into 3*3 matrix and display sum of all elements
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter the element at ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of elements are: "<<sum;
    return 0;
}