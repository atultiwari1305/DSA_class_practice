//wap to accept some element 3*3 matrix
// 2 1 4
// 5 3 7
// 4 8 1

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
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    cout<<"The sum of elements are: "<<sum;
    return 0;
}