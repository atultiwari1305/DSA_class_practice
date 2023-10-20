//wap to create a binary tree

#include<iostream>
using namespace std;
struct Node
{
    Node *left;
    char val;
    Node *right;
};

Node *createnode(char data)
{
    Node *node = new Node;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->val<<" ";
}

int main()
{
    Node *root = createnode('A');
    root->left = createnode('B');
    root->left->left = createnode('D');
    root->right = createnode('C');
    root->right->left = createnode('E');
    root->right->left->left = createnode('G');
    root->right->right = createnode('F');
    cout<<"Binary tree created successfully"<<endl;
    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal is: ";
    postorder(root);
    cout<<endl;
    return 0;
}