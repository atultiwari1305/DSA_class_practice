//wap to create and display single circular linked list

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
            node->next=start;
        }
        else
        {
            current->next = node;
            node->next=start;
            current = node;
        }
    }
}
void display()
{
    link *ptr = start;
    do
    {
        cout<<ptr->data<<"  ";
        cout<<ptr<<"\t";
        ptr=ptr->next;
    }while(ptr!=start);
}
int main()
{
    create();
    display();
    return 0;
}