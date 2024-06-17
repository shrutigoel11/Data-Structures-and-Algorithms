#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtTail(Node*&tail,Node* node){
    tail->next=node;
    tail=node;
}

Node* sortList(Node *&head){
    // Create dummy nodes with two pointers head and tail for eacg 0,1,2;

    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    //Now compare data by traversing and add in respective dummy nodes at tail;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            insertAtTail(zeroTail,curr);
        }
        else if(curr->data==1){
            insertAtTail(oneTail,curr);
        }
        else if(curr->data==2){
            insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }
    //Merge them all and check if either of them is empty then point to head of next element dummy node
    if(oneHead->next!=NULL ){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }
        oneTail->next=twoHead->next;
        twoTail->next=NULL;
    head=zeroHead->next; // zeroHead is pointing dummy node head
    //free memory
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;
}