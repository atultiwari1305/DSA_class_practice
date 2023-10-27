#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};

Node *create(int item)
{
    Node *newnode = new Node;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 1;
    return newnode;
}

int findheight(Node* node)
{
    if(node == NULL)
    {
        return 0;
    }
    return node->height;
}

Node* leftRotate(Node* x)
{
    Node* y = x->right;
    Node* R1 = y->left;

    y->left = x;
    x->right = R1;

    x->height = max(findheight(x->left), findheight(x->right)) + 1;
    y->height = max(findheight(y->left), findheight(y->right)) + 1;

    return y;
}

Node* rightRotate(Node* y)
{
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(findheight(x->left), findheight(x->right)) + 1;
    y->height = max(findheight(y->left), findheight(y->right)) + 1;

    return x;
}

int getbalance(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return findheight(root->left)-findheight(root->right);
}

Node *insert(Node *root, int item)
{
    if(root == NULL)
    {
        return create(item);
    }
    
    if(item< root->data)
    {
        root->left = insert(root->left, item);
    }
    else if(item>root->data)
    {
        root->right = insert(root->right, item);
    }
    else
    {
        return root;
    }
    root->height = 1 + max(findheight(root->left), findheight(root->right));
    int bf = getbalance(root);

    //LL CASE
    if(bf>1 && item < root->left->data)
    {
        return rightRotate(root);
    }

    //RR CASE
    else if(bf<-1 && item > root->right->data)
    {
        return leftRotate(root);
    }

    //LR CASE
    else if(bf>1 && item > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    //RL CASE
    else if(bf<-1 && item < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
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
    int n;
    cout<<"Enter the number of nodes to be created: ";
    cin>>n;
    int a[n];
    cout<<"Enter all the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root = insert(root,a[i]);
    }
    cout<<"AVL tree created successfully.";
    cout<<endl<<"Inorder traversal of AVL tree is: ";
    display(root);
    return 0;
}