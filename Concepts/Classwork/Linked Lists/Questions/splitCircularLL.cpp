#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    }
};

pair<int,int> split(Node*&head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=head && fast->next!=head){
        fast=fast->next;
        if(fast->next!=head){
            fast=fast->next;
        }
        slow=slow->next;
    }

    Node* head2=slow->next;
    slow->next=head;
    fast->next=head2;
    return make_pair(head->data,head2->data);
}

void insert(Node*&head,int data){
    //create new node
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        head->next=newnode;
    }
    else{
        Node* temp=head;
        while(temp->next!=head){
                temp=temp->next;
        }
                    temp->next=newnode;
            newnode->next=head;
    }
}

void print(Node*&head){
    Node*temp=head;
    if(head==NULL){
        cout<<"Empty Linked List";
    }
    else {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}

int main()
{

Node* head=NULL;
Node* newnode=new Node(10);
head=newnode;
head->next=newnode;
insert(head,20);
insert(head,30);
insert(head,40);
insert(head,50);
insert(head,60);
// print(head);

pair<int,int>p1=split(head);
cout<<p1.first<<" "<<p1.second;
return 0;
}