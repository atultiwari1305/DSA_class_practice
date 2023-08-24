//wap to search the loaction of an element
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
void search()
{
    int no, loc=0,flag=0;
    cout<<"\nEnter the number you want to search: ";
    cin>>no;
    link *ptr=start;
    while(ptr!=0)
    {
        if(ptr->data==no)
        {
            flag = 1;
            break;
        }
        loc++;
        ptr=ptr->next;
    }
    if(flag==0)
    {
        cout<<"Number not found.";
    }
    else
    {
        cout<<loc;
    }
}
int main()
{
    create();
    display();
    search();
    return 0;
}