#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(NULL) {}
};

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to delete the entire linked list to avoid memory leaks
void deleteList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

// Function to remove duplicates (implementation as provided)
Node* removeDuplicates(Node*& head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node* curr = head;
    
    while (curr != NULL) {
        Node* temp = curr->next;
        Node* prev = curr;
        
        while (temp != NULL) {
            if (temp->data == curr->data) {
                prev->next = temp->next;
                Node* deleteNode = temp;
                delete deleteNode;
                temp = prev->next;  // Move temp to the next node after deletion
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        
        curr = curr->next;
    }
    
    return head;
}

int main() {
    // Example linked list: 1 -> 2 -> 2 -> 3 -> 3 -> 4 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);
    
    cout << "Original list: ";
    printList(head);
    
    head = removeDuplicates(head);
    
    cout << "List after removing duplicates: ";
    printList(head);
    
    // Clean up memory by deleting the entire list
    deleteList(head);
    
    return 0;
}
