#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Preorder Traversal
void PreOrder(struct Node* root)
{

    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
//Inorder Traversal
void InOrder(struct Node* root)
{
    if(root==NULL)
        return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

//Postorder Traversal
void PostOrder(struct Node* root)
{
    if (root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct Node* root=new Node(7);
    root->left=new Node(8);
    root->right=new Node(9);
    root->left->left=new Node(10);
    root->left->right=new Node(11);
    root->right->left=new Node(12);
    root->right->right=new Node(13);

    PreOrder(root);
    cout<<"\n";
    InOrder(root);
    cout<<"\n";
    PostOrder(root);
    return 0;
}
