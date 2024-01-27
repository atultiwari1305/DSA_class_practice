#include<iostream>
using namespace std;
struct link
{
    int data;
    link *next;
    link *prev;
};
link *start=NULL;
link *current;
link *currentS;
link *node;

void create(int number)
{
    node=(link *)malloc(sizeof(link));
    node->data=number;
    node->next=NULL;
    node->prev=NULL;
    if(start==NULL)
    {
        start=node;
        current=node;
        node->next=start;
        currentS=current;
        node->prev=start;
    }
    else
    {
        start=node;
        start->next=currentS;
        currentS->prev=node;
        start->prev=current;
        currentS=start;
        
    }
}

void display()
{
    link *ptr = start;
    cout<<"Linked List: ";
    do
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=start);
}

void insertEnd(int number)
{
    node=(link *)malloc(sizeof(link));
    node->data=number;
    current->next=node;
    node->prev=current;
    node->next=start;
    start->prev=node;
    current=node;
}

int main()
{
    int choice,no;

    do
    {
        cin>>choice;
        if(choice==1 || choice==2)
        {
            cin>>no;
        }
        switch(choice)
        {
            case 1:
                create(no);
                break;
            case 2:
                insertEnd(no);
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice";
                break;  
        }
    }while(choice!=4);
    return 0;
}