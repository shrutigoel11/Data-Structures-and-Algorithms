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
  ~node(){
    if(next!=NULL){
        delete next;
        next=NULL;
    }
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
int getLength(node*& head) {
  int len = 0;
  node* temp = head; // take a ptr from head
  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}
void Deletion(node*& head, node*& tail, int position) {
    // If the list is empty, return
    if (head == NULL) {
        cout << "List is empty. Deletion not possible.\n";
        return;
    }
    
    // If position is invalid (less than 1 or greater than length of list), return
    int len = getLength(head);
    if (position < 1 || position > len) {
        cout << "Invalid position. Deletion not possible.\n";
        return;
    }
    
    // If deleting the first node
    if (position == 1) {
        node* temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL; // If only one node was there
        temp->next = NULL;
        delete temp;
        return;
    }
    
    // Deleting a node other than the first one
    node* curr = head;
    int count = 1;
    while (count < position) {
        curr = curr->next;
        count++;
    }

    if (curr == tail) { // If deleting the last node
        tail = tail->prev;
        tail->next = NULL;
    } else { // If deleting a node in the middle
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
    }
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}


int main()
{
  node* head = NULL;
  node* tail = NULL;

  // Create object by dma
  node* newnode = new node(10);
  head = newnode;
  tail = newnode;
  insertAtTail(head,tail,20);
  insertAtTail(head,tail,30);print(head);
  //now delete
  int position;
  cout<<"Enter posittion:";
  cin>>position;
  Deletion(head,tail,position);
  print(head);
  cout<<tail->data<<endl;
  cout<<head->data;

return 0;
}