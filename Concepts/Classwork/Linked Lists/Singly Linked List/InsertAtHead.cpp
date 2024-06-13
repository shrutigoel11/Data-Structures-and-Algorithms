#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int data)
{    
    //newnode create karlo jab bhi nayi value mile data ki
    node* temp=new node(data);
    temp->next=head; // as head points first node so we have to store address of first in node temp as it is inserted before node pointed by head
    head=temp;
}

void linkedlist(node* &head){
    node*temp=head;//head se null tak traverse karne k liye temp ptr
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next; // temp ++ means points next node
    }
}
int main()
{

node *head=NULL;
//FIRST NODE
node* newnode=new node(10);
head=newnode;//head points first node

//insert new node at head of first
insertAtHead(head,20);
insertAtHead(head,30);
//print linked list
linkedlist(head);
return 0;
}