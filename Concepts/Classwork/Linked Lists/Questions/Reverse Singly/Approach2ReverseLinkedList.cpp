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
void reverse( node* &head, node* &curr, node* &prev ){
    //base case
    if(curr==NULL){
        //update head;
        head=prev;
        return;
    }
    reverse(head,curr->next,curr); //head recursion -->right answer ,if  tail then reverse answer
    curr->next=prev;
    
}
node* reverseLinkedList(node* &head){
    node*curr=head;
    node*prev=NULL;
    reverse(head,curr,prev);
    return head;
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