#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int data)
    {
        key=data;
        left=right=NULL;
    }
};

int size_of_BT(Node *root)
{
    if(root==NULL)
        return 0;
    else
        return size_of_BT(root->left)+1+size_of_BT(root->right);
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->right=new Node(60);
    root->left->right=new Node(50);
    root->left->left=new Node(40);
    root->left->right->left=new Node(70);
    root->left->right->right=new Node(80);

    cout<<"Size of binary tree means number of nodes is : "<<size_of_BT(root);
}
