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
node* reverse( node* &head ){
    //empty list or single node
   if(head==NULL || head->next==NULL){
    return head;
   }
   node*temp=reverse(head->next);
   head->next->next=head;
   head->next=NULL;
   return temp;
    
}
node* reverseLinkedList(node* &head){
    return reverse(head);
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