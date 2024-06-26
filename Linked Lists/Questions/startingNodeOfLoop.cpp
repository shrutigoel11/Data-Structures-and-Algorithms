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