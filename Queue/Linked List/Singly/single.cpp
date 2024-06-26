#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node *rear = nullptr, *front = nullptr;

void enqueue(int data) {
    Node* newnode = new Node(data);
    if (rear == nullptr) {
        front = newnode;
        rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "Empty Queue\n";
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr; // Update rear when dequeuing the last element
        }
    }
}

void display(){
    if(front==nullptr){
        cout<<"Queue is empty";
    }
    else{
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"NULL";
        }
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // dequeue();
    // dequeue();
    // dequeue();

    if (front != nullptr) {
        cout << "FRONT->" << front->data << endl;
        cout << "REAR->" << rear->data << endl;
    } else {
        cout << "Queue is empty\n";
    }
    display();
    return 0;
}
