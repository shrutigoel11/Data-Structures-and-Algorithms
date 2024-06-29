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

        void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }