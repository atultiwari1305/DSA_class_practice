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

Node *insert(Node *root, int item)
{
    if(root == NULL)
    {
        return create(item);
    }
    if(item < root->data)
    {
        root->left = insert(root->left, item);
    }
    else if(item > root->data)
    {
        root->right = insert(root->right, item);
    }
    return root;
}

void inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node *deleteNode(Node *root, int item)
{
    if(root == NULL)
    {
        return root;
    }
    if(item < root->data)
    {
        root->left = deleteNode(root->left, item);
        return root;
    }
    else if(item > root->data)
    {
        root->right = deleteNode(root->right,item);
        return root;
    }

    //delete one child
    if(root->left == NULL)
    {
        Node *temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right == NULL)
    {
        Node *temp = root->left;
        delete root;
        return temp;
    }
    else
    {
        //two child
        Node *successorParent = root;
        Node *successor = root->right;
        while(successor->left != NULL)
        {
            successorParent = successor;
            successor = successor->left;
        }
        if(root != successorParent)
        {
            successorParent->left = successor->right;
        }
        else
        {
            successorParent->right = successor->right;
        }
        root->data = successor->data;
        delete successor;
        return root;
    }
}

int main()
{
    Node *root = NULL;
    int a[10], n,val;
    cout<<"Enter the number of elements inside tree: ";
    cin>>n;
    cout<<"Enter the elements for tree: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root = insert(root, a[i]);
    }
    cout<<"Binary Search Tree created successfully"<<endl;
    cout<<"Inorder Traversal is: ";
    inorder(root);
    cout<<endl<<"Enter the number to be deleted: ";
    cin>>val;
    root = deleteNode(root,val);
    cout<<"Value deleted successfully."<<endl;
    inorder(root);
}
//14 7 27 13 25 10 20 3 5 19