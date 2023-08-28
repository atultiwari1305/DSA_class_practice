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
    cout<<"Enter the number of nodes you want: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data: ";
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
    int loc;
    link *ptr=start;
    current=ptr->next;
    node=(link *)malloc(sizeof(link));
    cout<<"\nEnter the number to be inserted: ";
    cin>>node->data;
    cout<<"Enter the location: ";
    cin>>loc;
    for(int i=1;i<loc-1;i++)
    {
        ptr=ptr->next;
        current=current->next;
    }
    ptr->next=node;
    node->next=current;
    cout<<"Linked list after insertion: "<<endl;
}

int main()
{
    create();
    display();
    insert();
    display();
    return 0;
}