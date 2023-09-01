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
            node->next=start;
            node->prev=start;
        }
        else
        {
            current->next = node;
            node->prev = current;
            node->next=start;
            start->prev=node;
            current = node;
        }
    }
}
void display()
{
    cout<<endl;
    link *ptr = start;
    do
    {
        cout<<ptr->prev<<"\t";
        cout<<ptr->data<<"\t";
        cout<<ptr<<endl;
        ptr=ptr->next;
    }while(ptr!=start);
}
int main()
{
    create();
    display();
    return 0;
}