#include<iostream>
using namespace std;
struct link
{
    int data;
    link *prev;
    link *next;
};
link *start=NULL;
link *node;
link *current;
int n;

void create()
{
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node=(link *)malloc(sizeof(link));
        cout<<"Enter the data: ";
        cin>>node->data;

        if(start==NULL)
        {
            start=node;
            current = node;
            node->next=start;
            node->prev=start;
        }
        else
        {
            current->next=node;
            node->prev=current;
            node->next=start;
            start->prev=node;
            current = node;
        }
    }
}

void display()
{
    link *ptr = start;
    do
    {
        cout<<ptr->prev<<"\t";
        cout<<ptr->data<<"\t";
        cout<<ptr<<endl;
        ptr=ptr->next;
    }while(ptr!=start);
}

void delete1()
{
    int loc;
    cout<<"Enter the location of node to be deleted: ";
    cin>>loc;
    link *ptr = start;
    current = ptr->next;
    if(loc<1||loc>n)
    {
        cout<<"Invalid input";
        exit(1);
    }
    else if(loc==1)
    {
        current->prev=ptr->prev;
        ptr->prev->next=current;
        start=current;
    }
    else
    {
        for(int i=1;i<loc-1;i++)
        {
            ptr=ptr->next;
            current=current->next;
        }
        ptr->next=current->next;
        current->next->prev=ptr;
    }
}

int main()
{
    create();
    display();
    delete1();
    display();
    return 0;
}