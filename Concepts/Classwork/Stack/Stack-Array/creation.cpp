#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    int *arr;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top < size - 1) {
            top++;
            arr[top] = value;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    int peekElement() {
        if (top >= 0 && top < size) {
            return arr[top];
        } else {
            cout << "Empty Stack" << endl;
            return -1; // Return a default value or handle the error appropriately
        }
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    // Object create
    Stack st(2);

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    cout << st.peekElement() << endl;
    cout<<st.isEmpty();

    return 0;
}
