//wap to count the number of even elements present in a linked list
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
void displayEven()
{
    link *ptr=start;
    current = ptr->next;
    int count = 0;
    while(current!=NULL)
    {
        if(current->data % 2 == 0 )
        {
            count++;
        }
        ptr=ptr->next;
        current=current->next;
    }
    cout<<"Even elements are: "<<count;
}
int main()
{
    create();
    displayEven();
    return 0;
}