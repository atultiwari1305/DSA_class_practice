#include<iostream>
using namespace std;
struct stud
{
    int rollNo, marks;
    stud *next;
};
stud *start = NULL;
stud *current;
stud *node;
void create()
{
    //given number of students are 5 so no need to take input from user;
    for(int i=0;i<5;i++)
    {
        node=(stud *)malloc(sizeof(stud));
        cout<<"Enter roll number: ";
        cin>>node->rollNo;
        cout<<"Enter marks: ";
        cin>>node->marks;
        node->next=NULL;
        if(start == NULL)
        {
            current = node;
            start = node;
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