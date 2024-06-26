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

node* floydDetectLoop(node*&head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
        return slow;
    }
   
    }
    return NULL; 
}

node* getStarting(node*&head){
    if(head==NULL){
        return NULL;
    }
    node*fast=floydDetectLoop(head);
    node*slow=head;
    while(slow!=head){
        slow=slow->next;
        fast=fast->next;
    }
    if(slow==fast){
        return slow;
    }
}

void removeLoop(node*&head){
    if(head==NULL){
        return;
    }
    node* startNode=getStarting(head);
    if(startNode==NULL){
        return;
    }
    node*temp=startNode;
    while(temp->next!=startNode){
        temp=temp->next;
    } 
    temp->next=NULL;
}