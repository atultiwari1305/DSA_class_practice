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
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
    cout<<endl;
}
void reverse(link *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    reverse(ptr->next);
    cout<<ptr->data<<"\t";
}
int main()
{
    create();
    display();
    reverse(start);
    return 0;
}