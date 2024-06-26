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
        //destructor

        //memory free
        ~node() {
        int value = this->data;
        if (this->next != NULL) {
            delete this->next;
            this->next = NULL; // Set next to NULL before deleting
        }
    }

};
void linkedlist(node* &head){
    node*temp=head;//head se null tak traverse karne k liye temp ptr
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next; // temp ++ means points next node
    }
}
void insertAtTail(node* &tail,int data){
    // new node create
    node* temp=new node(data);//node constructor called data=data and next =null
    tail->next=temp;
    tail=temp;
}
void deletion(node*&head,node*&tail,int position){
   

    //Deletion at start
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        return;
    }
    //end
    node* current = head;
    node* prev = NULL;

    int cnt = 1;
    while (current && cnt < position) {
        prev = current;
        current = current->next;
        cnt++;
    }

    if (current == NULL) {
        return; // Position out of range
    }

    if (current == tail) {
        tail = prev; // Update tail if deleting the last node
    }

    prev->next = current->next;
    current->next = NULL;
    delete current;
}
    


int main()
{
node *newnode=new node(10);  // newnode is ptr
node *head=newnode;
node *tail=newnode;
insertAtTail(tail,20);
insertAtTail(tail,30);
insertAtTail(tail,40);
cout<<"Before: ";
linkedlist(head);

//DELETION CODE

int position;
cout<<"Enter position:";
cin>>position;
deletion(head,tail,position);
cout<<"After: ";
linkedlist(head);

return 0;
}