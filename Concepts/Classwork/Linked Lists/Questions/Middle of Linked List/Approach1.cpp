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

int getlength(node* &head){
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

node* middle(node*&head){
    int len=getlength(head);
    int mid;
   mid=(len/2);
    node*temp=head;
    int cnt=0;
    while(cnt<mid){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
int main()
{




return 0;
}