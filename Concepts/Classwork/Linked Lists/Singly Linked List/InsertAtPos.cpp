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
void insertAtHead(node* &head,int data)
{    
    //newnode create karlo jab bhi nayi value mile data ki
    node* temp=new node(data);
    temp->next=head; // as head points first node so we have to store address of first in node temp as it is inserted before node pointed by head
    head=temp;
}
void insertAtTail(node* &tail,int data){
    // new node create
    node* temp=new node(data);//node constructor called data=data and next =null
    tail->next=temp;
    tail=temp;
}
void insertAtPostition(node*&head,int position,int data,node*&tail){
    //start
    if(position==1){
        insertAtHead(head,data);
        return;//otherwise statements afterwards will also be executed
        }
    //position
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //end
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return; 
    }
    node* nodeToInsert=new node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

    

}


int main()
{
//FIRST NODE
node* newnode=new node(10);
node *head=newnode;//head points first node
node* tail=newnode; // only single node present so it is first and last
insertAtHead(head,20);
insertAtHead(head,40);

int position;
cout<<"Enter position at which you want to insert:";
cin>>position;

insertAtPostition(head,position,30,tail);
linkedlist(head);

return 0;
}