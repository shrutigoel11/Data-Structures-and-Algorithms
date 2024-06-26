#include <iostream>
using namespace std;

class node {
public:
  int data;
  node* next;
  node* prev;

  // Constructor to initialise value
  node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insertAtTail(node*&head,node*&tail,int data){
    //create
    node* temp=new node(data);
    //if empty
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    //if non-empty
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void print(node*& head) {
  node* temp = head; // take a ptr from head
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }cout<<endl;
}
int main() {
  node* head = NULL;
  node* tail = NULL;

  // Create object by dma
  node* newnode = new node(10);
  head = newnode;
  tail = newnode;
  insertAtTail(head,tail,20);
   insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
  print(head);
  cout<<head->data<<" ";
  cout<<tail->data;
  return 0;
}