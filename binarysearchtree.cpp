#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *insert(Node *root, int value)
{
    if(root==NULL)
    {
        Node *newnode=new Node;
        newnode->data=value;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    else
    {
        if(value<root->data)
        {
            root->left=insert(root->left, value);
        }
        else
        {
            root->right=insert(root->right, value);
        }
        return root;
        
    }
    
}

void preorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}

void inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
}

void postorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    { 
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    
}

int main()
{
    Node *root=NULL;
    int i,n,x;
    cout<<"How many values ";
    cin>>n;

    cout<<"Enter values ";
    for (i=0; i<n; i++)
    {
        cin>>x;
        root=insert(root, x);
    }
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nInorder Traversal: ";
    inorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
}
