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

int Height_of_BT(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int left_height=Height_of_BT(root->left);
        int right_height=Height_of_BT(root->right);
        if(left_height > right_height)
        {
            return left_height+1;
        }
        else
        {
            return right_height+1;
        }
    }
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

    cout<<"Height of binary tree is : "<<Height_of_BT(root);
}
