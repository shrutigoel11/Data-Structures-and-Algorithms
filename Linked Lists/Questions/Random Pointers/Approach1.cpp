#include<unordered_map>
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node* arb;
    Node(int x) {
    this->data = x;
    this->next = NULL;
  }
};
class Solution {
private:
    void insertAtTail(Node*& cloneHead, Node*& cloneTail, int data) {
        Node* node = new Node(data);
        if (cloneHead == nullptr) {
            cloneHead = node;
        } else {
            cloneTail->next = node;
        }
        cloneTail = node;
    }

public:
    Node* copyList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }
        
        // Step 1: Create a deep copy of the original list without the random pointers (arb)
        Node* cloneHead = nullptr;
        Node* cloneTail = nullptr;
        
        Node* temp = head;
        while (temp != nullptr) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // Step 2: Map original nodes to their cloned counterparts
        unordered_map<Node*, Node*> mapping;
        
        Node* original = head;
        Node* clone = cloneHead;
        
        while (original != nullptr) {
            mapping[original] = clone;
            original = original->next;
            clone = clone->next;
        }
        
        // Step 3: Set random pointers (arb) for the cloned list using the mapping
        original = head;
        clone = cloneHead;
        
        while (original != nullptr) {
            clone->arb = mapping[original->arb];
            original = original->next;
            clone = clone->next;
        }
        
        // Return the head of the cloned list
        return cloneHead;
    }
};