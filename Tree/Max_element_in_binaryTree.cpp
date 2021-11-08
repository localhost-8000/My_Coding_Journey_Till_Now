#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int num)
    {
        data=num;
        left=right=NULL;
    }
};
//..we can use level order traversal also....instead of printing just check max...
int find_Max(Node* root)
{
    int root_data,left_data,right_data,max=INT_MIN;
    if(root!=NULL)
    {
        root_data=root->data;
        left_data = find_Max(root->left);
        right_data = find_Max(root->right);

        if(left_data > right_data)
        {
            max=left_data;
        }
        else
        {
            max=right_data;
        }
        if(root_data > max)
        {
            max=root_data;
        }
    }
    return max;
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

    cout<<"Maximum element in the binary tree is: "<<find_Max(root);
}
