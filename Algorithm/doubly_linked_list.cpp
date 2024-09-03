#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev; //Previous Node
};

//Output-->10,35,20,50
void printForward(Node* n)
{
    while(n!= nullptr)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

//Output-->50,20,35,10
void printBackword(Node* n)
{
    while(n!= nullptr)
    {
        cout<<n->data<<" ";
        n=n->prev;
    }
}

int main()
{
    Node* head;
    Node* tail;

    //First Node
    Node* node=new Node();
    node->data=10;
    node->next=nullptr;
    node->prev=nullptr;
    head=node;
    tail=node;

    //Second node
    Node* secondNode=new Node();
    secondNode->data=35;
    secondNode->next=nullptr;
    secondNode->prev=tail;
    tail->next=secondNode;
    tail=secondNode;

    //Third Node
    Node* thirdNode=new Node();
    thirdNode->data=50;
    thirdNode->next=nullptr;
    thirdNode->prev=tail;
    tail->next=thirdNode;
    tail=thirdNode;

    //Insert between 35 and 50
    Node* middleNode=new Node();
    middleNode->data=20;
    middleNode->next=thirdNode;
    middleNode->prev=secondNode;
    secondNode->next=middleNode;
    thirdNode->prev=middleNode;

    printForward(head);
    cout<<"\n";
    printBackword(tail);


}
