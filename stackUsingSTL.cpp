#include<iostream>
#include<stack>
using namespace std;
stack <int> s1;
int main()
{
    cout<<s1.empty()<<endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<"Size: "<<s1.size()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.empty()<<endl;
    cout<<!s1.empty()<<endl;
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}