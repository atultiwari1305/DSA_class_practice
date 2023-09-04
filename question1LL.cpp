#include <iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
    struct link *prev;
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
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node=(struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        node->next=NULL;
        node->prev=NULL;
        if(start==NULL)
        {
            start=node;
            current=node;
        }
        else
        {
            current->next = node;
            node->prev = current;
            current = node;
        }
    }
}

void display(struct link *&start)
{
    struct link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}


void total1(link *&starta,link *&startb)
{
    int tot[100],ind=0;
    int carry=0;
    int totalam;
    link *ptr1=current1;
    link *ptr2=current2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        int d1=ptr1->data;
        int d2=ptr2->data;
        totalam = d1+d2 + carry;
        carry=0;
        while(totalam>=10)
        {
            totalam-=10;
            carry++;
        }
        tot[ind++]=totalam;
        ptr1=ptr1->prev;
        ptr2=ptr2->prev;
    }

    while(ptr1!=NULL)
    {
        tot[ind++]=ptr1->data+carry;
        carry=0;
        ptr1=ptr1->prev;
    }
    while(ptr2!=NULL)
    {
        tot[ind++]=ptr2->data+carry;
        carry=0;
        ptr2=ptr2->prev;
    }
    for(int i=ind-1;i>=0;i--)
    {
        cout<<tot[i]<<" ";
    }
}

int main()
{
    create(start1,current1,node1);
    create(start2,current2,node2);

    cout<<"First linked list: ";
    display(start1);
    cout<<"\nSecond linked list: ";
    display(start2);
    cout<<"\nTotal Sales: ";
    total1(start1,start2);

    return 0;
}