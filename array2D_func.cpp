#include<iostream>
using namespace std;

//creating 2D array
void create()
{
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter the element at ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"2D Array created!!!";
}

//dislaying 2D array
void display()
{
    int arr[3][3];
    cout<<"Your provided 2D array is: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

//searching 2D array elements
void search()
{
    int arr[3][3];
    int no;
    cout<<"Enter the number you want to search: ";
    cin>>no;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==no)
            {
                cout<<"The address of number is: ["<<i<<"]["<<j<<"]";
            }
            else
            {
                cout<<"Number not found";
            }
        }
    }
}
int main()
{
    int fnKeys;
    create();
    cout<<"What do you want to do next: ";
    cout<<"1)Display"<<endl<<"2)Search"<<endl<<"3)Exit"<<endl;
    cin>>fnKeys;
    switch(fnKeys)
    {
        case 1:
        {
            display();
            break;
        }
        case 2:
        {
            search();
            break;
        }
        case 3:
        {
            cout<<"Thank You!!";
            break;
        }
    }
    return 0;
}