#include <iostream>
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

    Node* buildTree(Node* root){
        cout<<"Enter parent data: ";
        int data;
        cin>>data;
        root=new Node(data); // Calls the constructor

        if(data==-1) return NULL;
        //Recursive call
        else{
            cout<<"Enter data for inserting at left of "<<data<<endl;
            root->left=buildTree(root->left);
            cout<<"Enter data for inserting at right of "<<data<<endl;
            root->right=buildTree(root->right);
        }
        return root;
    }

int main()
{
Node* root=NULL;
root=buildTree(root);

return 0;
}