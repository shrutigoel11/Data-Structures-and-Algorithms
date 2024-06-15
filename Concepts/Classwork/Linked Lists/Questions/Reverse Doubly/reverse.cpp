#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
node* reverseDoublyLinkedList(node* &head) {
    // If empty linked list or single node
    if (head == NULL || head->next == NULL) {
        return head;
    }
    // Nodes > 1
    node* prev = NULL;
    node* curr = head;
    while (curr != NULL) {
        node* forward = curr->next; // Store next pointer
        curr->next = prev; // Reverse next pointer
        curr->prev = forward; // Reverse prev pointer
        prev = curr; // Move pointers forward
        curr = forward;
    }
    head = prev; // Update head to point to the new first node
    return head;
}

int main()
{



return 0;
}