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
print(head);
return 0;
}