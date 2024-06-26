#include <iostream>
using namespace std;
template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
void addNode(Node<int>* &head, Node<int>* &tail, Node<int>* &node){
    if(head == NULL){
        head = node;
    }
    else {
        tail->next = node;
    }
    tail = node;
}

Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2){
       
    if(list1 == NULL)
        return list2;

    if(list2 == NULL)
        return list1;

    Node<int>* newHead = NULL;
    Node<int>* newTail = NULL;

    Node<int>* itr1 = list1;
    Node<int>* itr2 = list2;

    while(itr1 != NULL && itr2 != NULL) {
        if(itr1->data <= itr2->data){
            addNode(newHead, newTail, itr1);
            itr1 = itr1->next;
        }
        else {
            addNode(newHead, newTail, itr2);
            itr2 = itr2->next;
        }
    }

    while(itr1 != NULL) {
        addNode(newHead, newTail, itr1);
        itr1 = itr1->next;
    }   

    while(itr2 != NULL) {
        addNode(newHead, newTail, itr2);
        itr2 = itr2->next;
    }          

    newTail->next = NULL;
    return newHead;
}
