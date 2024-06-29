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

        void preorder(Node* root){
        if(root==NULL) return;
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }