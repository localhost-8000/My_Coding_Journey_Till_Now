#include<iostream>
#include<queue>
#include<stack>
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

//...................................................................

void Breadth_first_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    cout<<"Breadth first traversal: ";
    while(!q.empty())
    {
        Node* temp=q.front();
        cout<<temp->key<<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        q.pop();
    }
    cout<<endl;
}

//.............................................................

void Inorder_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Node *temp=root;
    Inorder_traversal(temp->left);
    cout<<temp->key<<" ";
    Inorder_traversal(temp->right);
}

//...Non recursive inorder traversal...

void Nonrecursive_inorder(Node *root)
{
    stack<Node*> s;
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
        cout<<root->key<<" ";
        root=root->right;
    }
}
//...............................................................

void Preorder_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Node *temp=root;
    cout<<temp->key<<" ";
    Preorder_traversal(temp->left);
    Preorder_traversal(temp->right);
}

//.................................................................

void Postorder_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Node *temp=root;
    Postorder_traversal(temp->left);
    Postorder_traversal(temp->right);
    cout<<temp->key<<" ";
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

    Breadth_first_traversal(root);

    cout<<endl<<"Inorder traversal: ";
    Inorder_traversal(root);

    cout<<endl<<endl<<"Preorder traversal: ";
    Preorder_traversal(root);

    cout<<endl<<endl<<"Postorder traversal: ";
    Postorder_traversal(root);
    cout<<endl;

    return 0;
}
