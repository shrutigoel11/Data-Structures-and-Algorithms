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

node* getMiddle(node*&head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }

    node* fast=head->next;
    node* slow=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
           fast=fast->next; 
        }
        slow=slow->next;
    }
    return slow;
}

int main()
{



return 0;
}