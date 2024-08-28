//Binary tree with BFS traversal

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:

    int data;
    Node* left;
    Node*  right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void BFS(Node* root)
{
    if(!root)
    {
        return;
    }
    queue<Node*> q;
    //Push the root
    q.push(root);

    while(!q.empty())
    {
        Node* top=q.front();
        q.pop();
        cout<<top->data<<" ";
        if(top->left !=NULL)
        {
            q.push(top->left);
        }
        if(top->right != NULL)
        {
            q.push(top->right);
        }
    }
    return;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    BFS(root);

    return 0;
}
