#include<iostream>
using namespace std;
#define size 5
int deque[size], front = -1, rear = -1;

void insert_front(int val)
{
    if((front==0 && rear == size-1) || rear == front-1)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else if(front == -1 && rear==-1)
    {
        front = 0;
        rear = 0;
        deque[front]=val;
    }
    else if(front==0)
    {
        front = size-1;
        deque[front] = val;
    }
    else
    {
        front = front - 1;
        deque[front] = val;
    }
}

void insert_rear(int val)
{
    if((front==0 && rear==size-1) || rear == front-1)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        deque[rear] = val;
    }
    else if(rear == size-1)
    {
        rear = 0;
        deque[rear] = val;
    }
    else
    {
        rear = rear+1;
        deque[rear] = val;
    }
}

void display()
{
    int i = front;
    cout<<"Elements of the queue are: ";
    while(i!=rear)
    {
        cout<<deque[i]<<" ";
        i = (i+1)%size;
    }
    cout<<deque[rear]<<endl;
}

void get_front()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"The element in front of queue is: "<<deque[front]<<endl;
    }
}

void get_rear()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"The element in rear of queue is: "<<deque[rear]<<endl;
    }
}

void delete_front()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue Underflow"<<endl;
    }
    else if(front == size-1)
    {
        cout<<"Deleted element is: "<<deque[front]<<endl;
        front=0;
    }
    else
    {
        cout<<"Deleted element is: "<<deque[front]<<endl;
        front=front+1;
    }
}

void delete_rear()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue Underflow"<<endl;
    }
    else if(rear==0)
    {
        cout<<"Deleted element is: "<<deque[rear]<<endl;
        rear=size-1;
    }
    else
    {
        cout<<"Deleted element is: "<<deque[rear]<<endl;
        rear=rear-1;
    }
}

int main()
{
    int choice, value;
    cout<<"1. Insert in front\n2. Insert in rear\n3. Delete from front\n4. Delete from rear\n";
    cout<<"5. Display\n6. Display front element\n7. Display rear element\n8. Exit\n";
    while(1)
    {
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the value you want to insert: ";
                cin>>value;
                insert_front(value);
                break;
            case 2:
                cout<<"Enter the value you want to insert: ";
                cin>>value;
                insert_rear(value);
                break;
            case 3:
                delete_front();
                break;
            case 4:
                delete_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                get_front();
                break;
            case 7:
                get_rear();
                break;
            case 8:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}