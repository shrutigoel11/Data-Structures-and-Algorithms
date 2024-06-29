#include <iostream>
#include <queue>
#include<stack>
using namespace std;
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=left;
            this->right=right;
        }

    };

void reverseLevelOrderTraversal(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    stack<Node*> s;

    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        s.push(temp);

        // Enqueue right child first, then left child
        if (temp->right) q.push(temp->right);
        if (temp->left) q.push(temp->left);
    }

    // Print nodes from the stack
    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        cout << temp->data << " ";
    }
    cout << endl;
}