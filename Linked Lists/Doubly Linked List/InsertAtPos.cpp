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
void print(node*& head) {
  node* temp = head; // take a ptr from head
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }cout<<endl;
}
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
void insertAtHead(node*& head,node*&tail, int data) {
  // Create the new node
  node* temp = new node(data);

  // Handle empty list (both head and tail are NULL)
  if (head == NULL) {
    head = temp;
    tail = temp;
    return;
  }

  // If list is not empty
  temp->next = head;
  head->prev = temp;
  head = temp;
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

void insertAtPosition(node*& head, node*& tail, int data, int position) {
    // Create new node
    node* temp = new node(data);
    node* current = head; // node after position
    node* before = nullptr;    // will be pointing node before position

    // Start
    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    // Invalid position
    int len = getLength(head);
    if (position > len + 1) {
        // Handle error: position out of bounds
        return;
    }

    // End 
    if (position> len) {
        insertAtTail(head, tail, data);
        return;
    }

    // Other cases
    int cnt = 1;
    while (cnt < position) {
        before = current;
        current = current->next;
        cnt++;
    }
    before->next = temp;
    temp->prev = before;
    temp->next = current;
    current->prev = temp;
    if (before == nullptr) {
        head = temp;
    }
    if (current == nullptr) {
        tail = temp;
    }
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
  insertAtTail(head,tail,40);
int position;
cout<<"Enter position at which you want to insert:";
cin>>position;
insertAtPosition(head,tail,30,position);
print(head);
return 0;
}