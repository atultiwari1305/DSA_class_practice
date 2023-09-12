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
int n;

void create()
{
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
    cout<<endl;
}

void sort()
{
    for(int i=0;i<n;i++)
    {
        link *ptr=start;
        current=ptr->next;
        while(current!=NULL)
        {
            if(ptr->data > current->data)
            {
                int temp=ptr->data;
                ptr->data=current->data;
                current->data=temp;
            }
            ptr=ptr->next;
            current=current->next;
        }
    }
}

int main()
{
    create();
    display();
    sort();
    display();
    return 0;
}