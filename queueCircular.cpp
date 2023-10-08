#include<iostream>
using namespace std;
#define size 5
int cqueue[size], n=5, front =-1, rear=-1;

void insertCQ(int val)
{
    if((rear+1)%size == front)
    {
        cout<<"Queue Overflow\n";
    }
    else if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(rear == n-1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    cqueue[rear]=val;
}

void deleteCQ()
{
    if(front == -1)
    {
        cout<<"Queue Underflow\n";
    }
    cout<<"Element deleted from queue is: "<<cqueue[front]<<endl;
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front == n-1)
    {
        front = 0;
    }
    else
    {
        front = front+1;
    }
}

void displayCQ()
{
    if(front == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    cout<<"Queue elements are: ";
    if(front<=rear)
    {
        while(front<=rear)
        {
            cout<<cqueue[front]<<" ";
            front++;
        }
    }
    else
    {
        while(front<=n-1)
        {
            cout<<cqueue[front]<<" ";
        }
        front = 0;
        while(front<=rear)
        {
            cout<<cqueue[front]<<" ";
            front++;
        }
    }
    cout<<endl;
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
                int value;
                cout<<"Enter the value to be inserted: ";
                cin>>value;
                insertCQ(value);
                break;
            case 2:
                deleteCQ();
                break;
            case 3:
                displayCQ();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice."<<endl;
        }
    }
}