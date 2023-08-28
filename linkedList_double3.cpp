//wap to enter the employee id and base salary
//if da is 20% and ta is 10% then calculate gross salary
//take average of gross salary and print it

#include<iostream>
using namespace std;
struct employee
{
    int empID;
    float bs;
    employee *next;
    employee *prev;
};
employee *start = NULL;
employee *node;
employee *current;
int n;

void create()
{
    cout<<"Enter the number of employees: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node=(employee *)malloc(sizeof(employee));
        cout<<"Enter the employee id: ";
        cin>>node->empID;
        cout<<"Enter the base salary: ";
        cin>>node->bs;
        node->next=NULL;
        node->prev=NULL;
        if(start==NULL)
        {
            current = node;
            start = node;
        }
        else
        {
            current->next=node;
            node->prev=current;
            current=node;
        }
    }
}

void display()
{
    float da,ta;
    int gross,sum=0;
    employee *ptr=start;
    while(ptr!=NULL)
    {
        da=ptr->bs*0.2;
        ta=ptr->bs*0.1;
        gross=ptr->bs+da+ta;
        cout<<"Gross salary: "<<gross<<"\t";
        sum+=gross;
        ptr=ptr->next;
    }
    cout<<"\nAverage salary is : "<<sum/n;
}
int main()
{
    create();
    display();
}