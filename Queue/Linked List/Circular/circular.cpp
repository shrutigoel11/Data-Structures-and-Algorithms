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

class CircularQueue {
private:
    Node* rear;
    Node* front;

public:
    CircularQueue() {
        rear = nullptr;
        front = nullptr;
    }

    ~CircularQueue() {
        // Free all nodes in the queue
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(int data) {
        Node* newnode = new Node(data);
        if (isEmpty()) {
            front = newnode;
        } else {
            rear->next = newnode;
        }
        rear = newnode;
        rear->next = front; // Circular link
        cout << data << " enqueued to Circular Queue" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
        } else {
            cout << front->data << " dequeued from Circular Queue" << endl;
            if (front == rear) {
                delete front;
                front = nullptr;
                rear = nullptr;
            } else {
                Node* temp = front;
                front = front->next;
                delete temp;
                rear->next = front; // Update circular link
            }
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Circular Queue is empty" << endl;
        } else {
            Node* temp = front;
            cout << "Circular Queue: ";
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != front);
            cout << endl;
        }
    }

    bool isEmpty() {
        return (front == nullptr && rear == nullptr);
    }
};

int main() {
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);

    cq.displayQueue();

    cq.dequeue();
    cq.dequeue();

    cq.displayQueue();

    cq.enqueue(50);
    cq.enqueue(60);

    cq.displayQueue();

    return 0;
}
