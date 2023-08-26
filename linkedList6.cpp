//given a linked list with two integers m and n delete n nodes after m nodes of a linked list

#include<iostream>
using namespace std;
struct link
{
    int data;
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
    
    for(int i=0; i<n; i++)
    {
        node=(link *)malloc(sizeof(link));
        cout<<"Enter the data: ";
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start=node;
            current =node;
        }
        else
        {
            current->next=node;
            current = node;
        }
    }
}

void display()
{
    link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
}

void delete1()
{
    cout<<"\nAfter Deletion: "<<endl;
    link *ptr=start;
    current=ptr->next;
    int m,n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<m;i++)
    {
        ptr=ptr->next;
        current=current->next;
    }
    for(int j=1;j<n;j++)
    {
        current=current->next;
    }
    ptr->next=current->next;
}

int main()
{
    create();
    display();
    delete1();
    display();
    return 0;
}