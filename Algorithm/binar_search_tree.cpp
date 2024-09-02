#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;

    }
};

//Recursion is mandatory in BST
//Insert In a BST
Node* insert(Node* root,int val)
{
    if(root==nullptr)
    {
        root=new Node(val);
        return root;
    }
    if(root->data >val)
    {
        root->left=insert(root->left,val);
    }
    if(root->data <val)
    {
        root->right=insert(root->right,val);
    }
    return root;
}

//Inorder
void inorder(Node* root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


//Search in a BST

bool search(Node* root,int key)
{
    if (root==nullptr)
    {
        return false;
    }

    if(root->data==key)
    {
        return true;
    }
    if(root->data >key)
    {
        return search(root->left,key);
    }
    else if(root->data <key)
    {
        return search(root->right,key);
    }
    return true;
}
int main()
{
    Node* root = nullptr;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 8);

    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;


    if(search(root,100))
    {
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
}

