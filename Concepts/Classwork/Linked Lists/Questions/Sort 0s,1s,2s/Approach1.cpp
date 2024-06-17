#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

Node* sort(Node*&head){
    int zeroCount=0, oneCount=0, twoCount=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0)zeroCount++;
        else if(temp->data==1)oneCount++;
        else if(temp->data==2) twoCount++;
        temp=temp->next;
    }
    temp=head;//again point head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;}
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;}
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;}
        temp=temp->next;
    }
    
        return head;
    }
    


int main()
{
    Node* head=NULL;
Node* newnode=new Node(1);
head=newnode;
head->next=new Node(0);
head->next->next=new Node(2);
head->next->next->next=new Node(1);
head=sort(head);
Node* temp2=head;
    while(temp2!=NULL){
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}



return 0;
}