#include<iostream>
using namespace std;
int top = -1;
const int maxSize = 10;
int stack[maxSize];

void push()
{
    int item;
    if(top==maxSize)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        cout<<"Enter the item to be entered: ";
        cin>>item;
        top = top+1;
        stack[top]=item;
    }
}

int pop()
{
    int item;
    if(top == -1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        item = stack[top];
        top = top - 1;
    }
    return item;
}

void display()
{
    if(top == -1)
    {
        cout<<"Stack is Empty";
    }
    else
    {
        cout<<"Elements of stack are: ";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }   
    }
}

int main()
{
    cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
    int choice;
    while(1)
    {
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting the program...";
                exit(0);
            default:
                cout<<"Invalid choice.";
        }
    }
}