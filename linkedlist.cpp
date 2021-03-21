#include<iostream>
using namespace std;
struct Node{
    string data;
    Node *next;
};

int main()
{
    //generate nodes
    Node *nodeone=new Node;
    Node *nodetwo=new Node;
    Node *nodethree=new Node;

   

    //assign values
    nodeone->data="Lisa";
    nodetwo->data="Mike";
    nodethree->data="John";

    //link the nodes
    nodeone->next=nodetwo;
    nodetwo->next=nodethree;
    nodethree->next=NULL;

    Node *head= new Node;
    head=nodeone;

    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}