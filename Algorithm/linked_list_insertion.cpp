#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};
Node* insertAtfront(Node* head, int data)
{
    Node* top=new Node();

    top->value=data;
    top->next=head;

    return top;
}

Node* insertAtend(Node* head,int data)
{
    Node* bottom=new Node();
    bottom->value=data;

    if (head == NULL) {
        return bottom;
    }
    //Traversing
    Node* last=head;

    while(last->next != NULL)
    {
        last=last->next;
    }
    last->next=bottom;

    return head;
}

void printList(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value<<endl;
        n=n->next;
    }
}

int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->value=1;
    head->next=second;

    second->value=2;
    second->next=third;

    third->value=3;
    third->next=NULL;

    //head=insertAtfront(head,56);
    //printList(head);

    head=insertAtend(head,50);
    printList(head);

    return 0;
}
