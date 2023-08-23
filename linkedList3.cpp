#include<iostream>
using namespace std;
struct link{
    int data;
    link *next;
};
link *start = NULL;
link *current;
link *node;
void create()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<"Enter the node elements: ";
    for(int i=0;i<n;i++)
    {
        node=(link *)malloc(sizeof(link));
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            current = node;
            start = node;
        }
        else
        {
            current->next=node;
            current = node;
        }
    }
}
void displayMin()
{
    link *ptr=start;
    current = ptr->next;
    int small = ptr->data;
    while(current!=NULL)
    {
        if(current->data < small)
        {
            small=current->data;
        }
        ptr=ptr->next;
        current=current->next;
    }
    cout<<small;
}
int main()
{
    create();
    displayMin();
    return 0;
}