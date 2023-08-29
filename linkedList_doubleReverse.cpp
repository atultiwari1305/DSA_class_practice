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
link *node;

void create()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the data: ";
        node=(link *)malloc(sizeof(link));
        cin>>node->data;
        node->next=NULL;
        node->prev=NULL;
        if(start==NULL)
        {
            start=node;
            current=node;
        }
        else
        {
            current->next = node;
            node->prev = current;
            current = node;
        }
    }
}
void display()
{
    link *ptr = start;
    while(ptr!=NULL)
    {
        cout<<ptr->prev<<"\t";
        cout<<ptr->data<<"  ";
        cout<<ptr<<"\t"<<endl;
        ptr=ptr->next;
    }
}

void reverse()
{
    link *ptr = current;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"t";
        ptr=ptr->prev;
    }
}

int main()
{
    create();
    display();
    reverse();
    return 0;
}