#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
     // whenever new node created net is null and data is i/p parameter
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void linkedlist(node* &head){
    node*temp=head;//head se null tak traverse karne k liye temp ptr
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next; // temp ++ means points next node
    }
}

void insertAtTail(node* &tail,int data){
    // new node create
    node* temp=new node(data);//node constructor called data=data and next =null
    tail->next=temp;
    tail=temp;
}
int main()
{

node *head=NULL;
//FIRST NODE
node* newnode=new node(10);
head=newnode;//head points first node
node* tail=newnode; // only single node present so it is first and last
//print linked list
insertAtTail(tail,20);
linkedlist(head);
return 0;
}