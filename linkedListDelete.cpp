//wap to delete middle element
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
        cout<<ptr<<endl;
        ptr=ptr->next;
    }
}

void delete1()
{
    cout<<"\nAfter Deletion: "<<endl;
    link *ptr=start;
    current=ptr->next;
    int loc=n/2;
    for(int i=1;i<loc-1;i++)
    {
        ptr=ptr->next;
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