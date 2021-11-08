#include<iostream>
#include<stack>
using namespace std;

struct node
{
    char data;
    node* left;
    node* right;
}typedef bst;

bst* get_node(char data)
{
    bst *p=new bst();
    p->data=data;
    p->left=p->right=NULL;
    return p;
}

bst* Insert(bst* root,char data)
{
    if(root==NULL)
    {
        return get_node(data);
    }
    else if(data <= root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}

bool Search(bst *root, int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(root->data < data)
    {
        return Search(root->right,data);
    }
    else
    {
        return Search(root->left,data);
    }
}

int Inorder_traversal(bst *root,int sum)
{
    if(root==NULL)
    {
        return sum;
    }
    sum=Inorder_traversal(root->left,sum);
    cout<<root->data<<" ";
    sum++;
    sum=Inorder_traversal(root->right,sum);
    return sum;
}
void Nonrecursive_inorder(bst *root)
{
    stack<bst*> s;
    while(1)
    {
        while(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
        if(s.empty())
            break;
        root=s.top();
        s.pop();
        cout<<root->data<<" ";
        root=root->right;
    }

}

int main()
{
    bst *root=NULL;
    root=Insert(root,'D');
    //Insert(root,30);
    //Insert(root,20);
    //Insert(root,40);
    //Insert(root,70);
    //Insert(root,60);
    //Insert(root,80);
    Insert(root,'A');
    Insert(root,'B');
    Insert(root,'H');
    Insert(root,'K');
    Insert(root,'E');
    Insert(root,'J');
    Insert(root,'C');
    cout<<Inorder_traversal(root,0);
    cout<<endl;
    Nonrecursive_inorder(root);
    //cout<<Search(root,12);

}
