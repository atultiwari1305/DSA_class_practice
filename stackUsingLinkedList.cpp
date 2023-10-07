#include<iostream>
using namespace std;

struct link
{
    int data;
    link *next;
};
link *top = NULL;
link *node;

void push(int value)
{
    node=(link *)malloc(sizeof(link));
    node->data = value;
    node->next = top;
    top = node;
}

void pop()
{
    if(top == NULL)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        cout<<"Popped element is: "<<top->data<<endl;
        top = top->next;
    }
}

void display()
{
    link *ptr;
    if(top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        ptr = top;
        cout<<"Stack elements are: ";
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    cout<<endl;
}

int main()
{
    int choice;
    cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
    while(1)
    {
        cout<<"Enter the choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int value;
                cout<<"Enter the value to be entered: ";
                cin>>value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Program exited successfully.";
                exit(0);
            default:
                cout<<"Invalid choice\n1";
        }
    }
}