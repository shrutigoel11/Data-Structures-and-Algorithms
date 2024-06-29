#include <iostream>
#include <queue>
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

    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }