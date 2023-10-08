#include<iostream>
using namespace std;
int n=100,front = -1, rear = -1,queue[100];
void insert()
{
    int val;
    if(rear == n-1)
    {
        cout<<"Queue Overflow";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        cout<<"Enter the number you want to insert: ";
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}

void delete1()
{
    if(front == -1 || front>rear)
    {
        cout<<"Queue Underflow"<<endl;
    }
    else
    {
        cout<<"Deleted element is: "<<queue[front]<<endl;
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        cout<<"Queue is empty";
    }
    else
    {
        cout<<"Queue elements are: ";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int choice;
    cout<<"1. Insert\n2. Delete\n3. Display\n4. Exit\n";
    while(1)
    {
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete1();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice."<<endl;
        }
    }
}