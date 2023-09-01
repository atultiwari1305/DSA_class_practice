#include <iostream>
using namespace std;
struct link
{
    int data;
    link *next;
};
link *start1=NULL;
link *start2=NULL;
link *node;
link *current;
link *mergeStart = NULL;
link *mergeCurrent = NULL;

void create(link *&start)
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data: ";
        node=(link *)malloc(sizeof(link));
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

void display(link *&start)
{
    link *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

void merge(link *&s1, link *&s2)
{
    link *node;
    while(s1 != NULL && s2 != NULL)
    {
        node = (link *)malloc(sizeof(link));
        if(s1->data < s2->data)
        {
            node -> data = s1 -> data;
            s1 = s1 -> next;
        }
        else
        {
            node -> data = s2 -> data;
            s2 = s2 -> next;
        }
        node -> next = NULL;
        if(mergeStart == NULL)
        {
            mergeStart = node;
            mergeCurrent = node;
        }
        else
        {
            mergeCurrent -> next = node;
            mergeCurrent = node;
        }
    }
    while(s1 != NULL)
    {
        node = (link *)malloc(sizeof(link));
        node -> data = s1 ->data;
        ans -> next = node;
        ans = node;
        s1 = s1 -> next;
    }
    while(s2 != NULL)
    {
        node = (link *)malloc(sizeof(link));
        node -> data = s2 ->data;
        ans -> next = node;
        ans = node;
        s2 = s2 -> next;
    }
}
int main()
{
    
    cout<<"Enter first LinkedList"<<endl;
    create(start1);
    cout<<"Enter second LinkedList"<<endl;
    create(start2);
    cout<<"Elements of linked list one: "<<endl;
    display(start1);
    cout<<"Elements of linked list two: "<<endl;
    display(start2);
    merge(start1, start2);
    display(mergeStart);
    return 0;
}