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

bool isCircular(node*&head){
    //empty list
    if(head==NULL){
        return true;
    }
    // //if one node
    // if(head->next==NULL){
    //     if(head->next==head){
    //         return true;
    //     }
    //     return false;
    // }
    //Greater than one node and equals to one node
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    else if(temp==head){
        return true;
    }
}

int main()
{



return 0;
}