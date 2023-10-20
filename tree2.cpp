#include<iostream>
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};
Node *create()
{
    char val;
    cout<<"Enter the Element(or X for no element): ";
    cin>>val;
    if(val=='X')
    {
        return NULL;
    }
    Node *newnode =  new Node;
    newnode->data = val;
    cout<<"Enter the left child of "<<val<<": "<<endl;
    newnode->left = create();
    cout<<"Enter the right child of "<<val<<": "<<endl;
    newnode->right = create();
    return newnode;
}

void display(Node *root)
{
    if(root==NULL)
    {
        return;
    }

    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main()
{
    Node *root = NULL;
    root=create();
    cout<<"Binary tree created successfully"<<endl;
    cout<<"Inorder traversal is: ";
    display(root);
    return 0;
}