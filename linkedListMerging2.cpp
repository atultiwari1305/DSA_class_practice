#include <iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
};

struct link *start1=NULL;
struct link *start2=NULL;
struct link *node1;
link *node2;
link *current1;
struct link *current2;

void create(link *&start, link *&current, link *&node)
{
    int n;
    cout<<"Enter the number of nodes you want: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data: ";
        node=(struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start=node;
            current=node;
        }
        else
        {
            current->next=node;
            current=node;
        }
    }
}

void display(struct link *&start)
{
    struct link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\t";
        cout<<ptr<<endl;
        ptr=ptr->next;
    }
}

void merge1(link *&node1, link *&start2)
{
    node1->next=start2;
}

int main()
{
    cout<<"Creating First Linked List: "<<endl;
    create(start1,current1,node1);
    display(start1);

    cout<<"\nCreating Second Linked List:"<<endl;
    create(start2,current2,node2);
    display(start2);

    cout<<"\nAfter merging: \n";
    merge1(node1, start2);
    display(start1);
    return 0;
}