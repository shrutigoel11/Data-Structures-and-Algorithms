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
void insertAtTail(node* &tail,int data){
    // new node create
    node* temp=new node(data);//node constructor called data=data and next =null
    tail->next=temp;
    tail=temp;
}

node* reverseLinkedList(node* &head){
    //if empty linked list and single node
    if(head==NULL || head->next==NULL){
        return head;
    }
    //Nodes>1
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        node*forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev; // as prev now points last node i.e. first node of reversed linked list
}

int main()
{

node *newnode1=new node(10);  // newnode is ptr
node *head=newnode1;
node *tail=newnode1;
insertAtTail(tail,20);
node*newhead=reverseLinkedList(head);
cout<<newhead->data;


return 0;
}