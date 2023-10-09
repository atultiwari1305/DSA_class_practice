#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *front=NULL, *rear=NULL, *newnode, *temp;

void insert()
{
    cout<<"Enter the number to be inserted: ";
    newnode = new node;
    cin>>newnode->data;
    newnode->next = NULL;
    if(front==NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void delete1()
{
    temp = front;
    if(front == NULL)
    {
        cout<<"Queue Underflow"<<endl;
    }
    else
    {
        cout<<"Deleted element is: "<<front->data<<endl;
        front = front->next;
        delete temp;
        temp = NULL;
    }
}

void display()
{
    temp = front;
    if(front == NULL)
    {
        cout<<"Queue Underflow"<<endl;
    }
    else
    {
        cout<<"Elements of the Queue are: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
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
        switch(choice)
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
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}