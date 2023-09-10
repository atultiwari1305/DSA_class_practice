#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
struct link
{
    int data;
    link *next;
};
link *start=NULL;
link *current;
link *node;
void create()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node=(link *)malloc(sizeof(link));
        cin>>node->data;
        node->next = NULL;
        if(start==NULL)
        {
            start = node;
            current = node;
        }
        else
        {
            current->next = node;
            current = node;
        }
    }
}

void display()
{
    link *ptr = start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
}

void insert()
{
    link *ptr=start;
    current=ptr->next;
    node=(link *)malloc(sizeof(link));
    cout<<"Enter the number: ";
    cin>>node->data;
    if(node->data<ptr->data)
    {
        node->next=ptr;
        start=node;
    }
    else
    {
        while(node->data>current->data)
        {
            ptr=ptr->next;
            current=current->next;
        }
        ptr->next=node;
        node->next=current;
    }
}

int main()
{
    create();
    insert();
    display();
    return 0;
}