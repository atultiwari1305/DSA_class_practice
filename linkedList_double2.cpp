//wap to enter name and marks and display roll no of student scored more than 60
#include<iostream>
using namespace std;
struct stud
{
    int rollNo ,marks;
    stud *next;
    stud *prev;
};
stud *start=NULL;
stud *current;
stud *node;

void create()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        node=(stud *)malloc(sizeof(stud));
        cout<<"Enter the rollNo: ";
        cin>>node->rollNo;
        cout<<"Enter the marks: ";
        cin>>node->marks;
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
void display()
{
    // int filterMarks;
    // cout<<"Enter the filter criteria: ";
    // cin>>filterMarks;
    stud *ptr=start;
    while(ptr!=NULL)
    {
        if((ptr->marks)>=60)
        {
            cout<<ptr->rollNo<<"\t";
        }
        else
        {
            continue;
        }
        ptr=ptr->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}