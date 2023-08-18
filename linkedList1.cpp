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
        cout<<ptr<<"\t";
        ptr=ptr->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}