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
  }
  cout<<endl;
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

int main() {
  node* head = NULL;
  node* tail = NULL;

  // Create object by dma
  node* newnode = new node(10);
  head = newnode;
  tail = newnode;
  insertAtHead(head,tail, 20);
  print(head);
  int len = getLength(head);
  cout << "Length of linked list is:" << len << endl;

  return 0;
}