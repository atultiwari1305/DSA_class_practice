#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *create(int item)
{
    Node *newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

Node *insert(Node *node, int item)
{
    if(node==NULL)
    {
        return create(item);
    }
    if(item<node->data)
    {
        node->left = insert(node->left, item);
    }
    else if(item> node->data)
    {
        node->right = insert(node->right, item);
    }
    return node;
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
    int a[20];
    cout<<"Enter the element to be inserted in BST: ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    root = insert(root,a[0]);
    for(int i=1;i<10;i++)
    {
        insert(root,a[i]);
    }
    cout<<"Binary Search Tree created successfully"<<endl;
    cout<<"Inorder traversal is: ";
    display(root);
}